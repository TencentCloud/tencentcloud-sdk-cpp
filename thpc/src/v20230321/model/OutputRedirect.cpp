/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/thpc/v20230321/model/OutputRedirect.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Thpc::V20230321::Model;
using namespace std;

OutputRedirect::OutputRedirect() :
    m_driverHasBeenSet(false),
    m_optionsHasBeenSet(false)
{
}

CoreInternalOutcome OutputRedirect::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Driver") && !value["Driver"].IsNull())
    {
        if (!value["Driver"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputRedirect.Driver` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_driver = string(value["Driver"].GetString());
        m_driverHasBeenSet = true;
    }

    if (value.HasMember("Options") && !value["Options"].IsNull())
    {
        if (!value["Options"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OutputRedirect.Options` is not array type"));

        const rapidjson::Value &tmpValue = value["Options"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_options.push_back((*itr).GetString());
        }
        m_optionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OutputRedirect::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_driverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Driver";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_driver.c_str(), allocator).Move(), allocator);
    }

    if (m_optionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Options";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_options.begin(); itr != m_options.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string OutputRedirect::GetDriver() const
{
    return m_driver;
}

void OutputRedirect::SetDriver(const string& _driver)
{
    m_driver = _driver;
    m_driverHasBeenSet = true;
}

bool OutputRedirect::DriverHasBeenSet() const
{
    return m_driverHasBeenSet;
}

vector<string> OutputRedirect::GetOptions() const
{
    return m_options;
}

void OutputRedirect::SetOptions(const vector<string>& _options)
{
    m_options = _options;
    m_optionsHasBeenSet = true;
}

bool OutputRedirect::OptionsHasBeenSet() const
{
    return m_optionsHasBeenSet;
}

