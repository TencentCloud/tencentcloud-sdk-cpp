/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/dsgc/v20190723/model/DspaFieldResultDataSample.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DspaFieldResultDataSample::DspaFieldResultDataSample() :
    m_dataSampleHasBeenSet(false)
{
}

CoreInternalOutcome DspaFieldResultDataSample::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DataSample") && !value["DataSample"].IsNull())
    {
        if (!value["DataSample"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaFieldResultDataSample.DataSample` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSample = string(value["DataSample"].GetString());
        m_dataSampleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspaFieldResultDataSample::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dataSampleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSample";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSample.c_str(), allocator).Move(), allocator);
    }

}


string DspaFieldResultDataSample::GetDataSample() const
{
    return m_dataSample;
}

void DspaFieldResultDataSample::SetDataSample(const string& _dataSample)
{
    m_dataSample = _dataSample;
    m_dataSampleHasBeenSet = true;
}

bool DspaFieldResultDataSample::DataSampleHasBeenSet() const
{
    return m_dataSampleHasBeenSet;
}

