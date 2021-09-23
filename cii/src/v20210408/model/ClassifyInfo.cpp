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

#include <tencentcloud/cii/v20210408/model/ClassifyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cii::V20210408::Model;
using namespace std;

ClassifyInfo::ClassifyInfo() :
    m_firstClassHasBeenSet(false),
    m_secondClassHasBeenSet(false),
    m_thirdClassHasBeenSet(false),
    m_firstClassIdHasBeenSet(false),
    m_secondClassIdHasBeenSet(false),
    m_thirdClassIdHasBeenSet(false)
{
}

CoreInternalOutcome ClassifyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FirstClass") && !value["FirstClass"].IsNull())
    {
        if (!value["FirstClass"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClassifyInfo.FirstClass` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstClass = string(value["FirstClass"].GetString());
        m_firstClassHasBeenSet = true;
    }

    if (value.HasMember("SecondClass") && !value["SecondClass"].IsNull())
    {
        if (!value["SecondClass"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClassifyInfo.SecondClass` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secondClass = string(value["SecondClass"].GetString());
        m_secondClassHasBeenSet = true;
    }

    if (value.HasMember("ThirdClass") && !value["ThirdClass"].IsNull())
    {
        if (!value["ThirdClass"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClassifyInfo.ThirdClass` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_thirdClass = string(value["ThirdClass"].GetString());
        m_thirdClassHasBeenSet = true;
    }

    if (value.HasMember("FirstClassId") && !value["FirstClassId"].IsNull())
    {
        if (!value["FirstClassId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClassifyInfo.FirstClassId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_firstClassId = value["FirstClassId"].GetUint64();
        m_firstClassIdHasBeenSet = true;
    }

    if (value.HasMember("SecondClassId") && !value["SecondClassId"].IsNull())
    {
        if (!value["SecondClassId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClassifyInfo.SecondClassId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_secondClassId = value["SecondClassId"].GetUint64();
        m_secondClassIdHasBeenSet = true;
    }

    if (value.HasMember("ThirdClassId") && !value["ThirdClassId"].IsNull())
    {
        if (!value["ThirdClassId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClassifyInfo.ThirdClassId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_thirdClassId = value["ThirdClassId"].GetUint64();
        m_thirdClassIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClassifyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_firstClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstClass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstClass.c_str(), allocator).Move(), allocator);
    }

    if (m_secondClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecondClass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secondClass.c_str(), allocator).Move(), allocator);
    }

    if (m_thirdClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThirdClass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_thirdClass.c_str(), allocator).Move(), allocator);
    }

    if (m_firstClassIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstClassId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_firstClassId, allocator);
    }

    if (m_secondClassIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecondClassId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_secondClassId, allocator);
    }

    if (m_thirdClassIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThirdClassId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_thirdClassId, allocator);
    }

}


string ClassifyInfo::GetFirstClass() const
{
    return m_firstClass;
}

void ClassifyInfo::SetFirstClass(const string& _firstClass)
{
    m_firstClass = _firstClass;
    m_firstClassHasBeenSet = true;
}

bool ClassifyInfo::FirstClassHasBeenSet() const
{
    return m_firstClassHasBeenSet;
}

string ClassifyInfo::GetSecondClass() const
{
    return m_secondClass;
}

void ClassifyInfo::SetSecondClass(const string& _secondClass)
{
    m_secondClass = _secondClass;
    m_secondClassHasBeenSet = true;
}

bool ClassifyInfo::SecondClassHasBeenSet() const
{
    return m_secondClassHasBeenSet;
}

string ClassifyInfo::GetThirdClass() const
{
    return m_thirdClass;
}

void ClassifyInfo::SetThirdClass(const string& _thirdClass)
{
    m_thirdClass = _thirdClass;
    m_thirdClassHasBeenSet = true;
}

bool ClassifyInfo::ThirdClassHasBeenSet() const
{
    return m_thirdClassHasBeenSet;
}

uint64_t ClassifyInfo::GetFirstClassId() const
{
    return m_firstClassId;
}

void ClassifyInfo::SetFirstClassId(const uint64_t& _firstClassId)
{
    m_firstClassId = _firstClassId;
    m_firstClassIdHasBeenSet = true;
}

bool ClassifyInfo::FirstClassIdHasBeenSet() const
{
    return m_firstClassIdHasBeenSet;
}

uint64_t ClassifyInfo::GetSecondClassId() const
{
    return m_secondClassId;
}

void ClassifyInfo::SetSecondClassId(const uint64_t& _secondClassId)
{
    m_secondClassId = _secondClassId;
    m_secondClassIdHasBeenSet = true;
}

bool ClassifyInfo::SecondClassIdHasBeenSet() const
{
    return m_secondClassIdHasBeenSet;
}

uint64_t ClassifyInfo::GetThirdClassId() const
{
    return m_thirdClassId;
}

void ClassifyInfo::SetThirdClassId(const uint64_t& _thirdClassId)
{
    m_thirdClassId = _thirdClassId;
    m_thirdClassIdHasBeenSet = true;
}

bool ClassifyInfo::ThirdClassIdHasBeenSet() const
{
    return m_thirdClassIdHasBeenSet;
}

