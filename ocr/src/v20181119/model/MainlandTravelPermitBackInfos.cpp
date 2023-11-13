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

#include <tencentcloud/ocr/v20181119/model/MainlandTravelPermitBackInfos.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

MainlandTravelPermitBackInfos::MainlandTravelPermitBackInfos() :
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_iDNumberHasBeenSet(false),
    m_historyNumberHasBeenSet(false)
{
}

CoreInternalOutcome MainlandTravelPermitBackInfos::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MainlandTravelPermitBackInfos.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MainlandTravelPermitBackInfos.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("IDNumber") && !value["IDNumber"].IsNull())
    {
        if (!value["IDNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MainlandTravelPermitBackInfos.IDNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iDNumber = string(value["IDNumber"].GetString());
        m_iDNumberHasBeenSet = true;
    }

    if (value.HasMember("HistoryNumber") && !value["HistoryNumber"].IsNull())
    {
        if (!value["HistoryNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MainlandTravelPermitBackInfos.HistoryNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_historyNumber = string(value["HistoryNumber"].GetString());
        m_historyNumberHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MainlandTravelPermitBackInfos::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_iDNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IDNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iDNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_historyNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HistoryNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_historyNumber.c_str(), allocator).Move(), allocator);
    }

}


string MainlandTravelPermitBackInfos::GetType() const
{
    return m_type;
}

void MainlandTravelPermitBackInfos::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool MainlandTravelPermitBackInfos::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string MainlandTravelPermitBackInfos::GetName() const
{
    return m_name;
}

void MainlandTravelPermitBackInfos::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool MainlandTravelPermitBackInfos::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string MainlandTravelPermitBackInfos::GetIDNumber() const
{
    return m_iDNumber;
}

void MainlandTravelPermitBackInfos::SetIDNumber(const string& _iDNumber)
{
    m_iDNumber = _iDNumber;
    m_iDNumberHasBeenSet = true;
}

bool MainlandTravelPermitBackInfos::IDNumberHasBeenSet() const
{
    return m_iDNumberHasBeenSet;
}

string MainlandTravelPermitBackInfos::GetHistoryNumber() const
{
    return m_historyNumber;
}

void MainlandTravelPermitBackInfos::SetHistoryNumber(const string& _historyNumber)
{
    m_historyNumber = _historyNumber;
    m_historyNumberHasBeenSet = true;
}

bool MainlandTravelPermitBackInfos::HistoryNumberHasBeenSet() const
{
    return m_historyNumberHasBeenSet;
}

