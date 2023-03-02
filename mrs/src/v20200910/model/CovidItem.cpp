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

#include <tencentcloud/mrs/v20200910/model/CovidItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

CovidItem::CovidItem() :
    m_sampleTimeHasBeenSet(false),
    m_testTimeHasBeenSet(false),
    m_testOrganizationHasBeenSet(false),
    m_testResultHasBeenSet(false),
    m_codeColorHasBeenSet(false)
{
}

CoreInternalOutcome CovidItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SampleTime") && !value["SampleTime"].IsNull())
    {
        if (!value["SampleTime"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CovidItem.SampleTime` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sampleTime.Deserialize(value["SampleTime"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sampleTimeHasBeenSet = true;
    }

    if (value.HasMember("TestTime") && !value["TestTime"].IsNull())
    {
        if (!value["TestTime"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CovidItem.TestTime` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_testTime.Deserialize(value["TestTime"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_testTimeHasBeenSet = true;
    }

    if (value.HasMember("TestOrganization") && !value["TestOrganization"].IsNull())
    {
        if (!value["TestOrganization"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CovidItem.TestOrganization` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_testOrganization.Deserialize(value["TestOrganization"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_testOrganizationHasBeenSet = true;
    }

    if (value.HasMember("TestResult") && !value["TestResult"].IsNull())
    {
        if (!value["TestResult"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CovidItem.TestResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_testResult.Deserialize(value["TestResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_testResultHasBeenSet = true;
    }

    if (value.HasMember("CodeColor") && !value["CodeColor"].IsNull())
    {
        if (!value["CodeColor"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CovidItem.CodeColor` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_codeColor.Deserialize(value["CodeColor"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_codeColorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CovidItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sampleTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SampleTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sampleTime.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_testTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TestTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_testTime.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_testOrganizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TestOrganization";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_testOrganization.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_testResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TestResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_testResult.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_codeColorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeColor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_codeColor.ToJsonObject(value[key.c_str()], allocator);
    }

}


BaseItem CovidItem::GetSampleTime() const
{
    return m_sampleTime;
}

void CovidItem::SetSampleTime(const BaseItem& _sampleTime)
{
    m_sampleTime = _sampleTime;
    m_sampleTimeHasBeenSet = true;
}

bool CovidItem::SampleTimeHasBeenSet() const
{
    return m_sampleTimeHasBeenSet;
}

BaseItem CovidItem::GetTestTime() const
{
    return m_testTime;
}

void CovidItem::SetTestTime(const BaseItem& _testTime)
{
    m_testTime = _testTime;
    m_testTimeHasBeenSet = true;
}

bool CovidItem::TestTimeHasBeenSet() const
{
    return m_testTimeHasBeenSet;
}

BaseItem CovidItem::GetTestOrganization() const
{
    return m_testOrganization;
}

void CovidItem::SetTestOrganization(const BaseItem& _testOrganization)
{
    m_testOrganization = _testOrganization;
    m_testOrganizationHasBeenSet = true;
}

bool CovidItem::TestOrganizationHasBeenSet() const
{
    return m_testOrganizationHasBeenSet;
}

BaseItem CovidItem::GetTestResult() const
{
    return m_testResult;
}

void CovidItem::SetTestResult(const BaseItem& _testResult)
{
    m_testResult = _testResult;
    m_testResultHasBeenSet = true;
}

bool CovidItem::TestResultHasBeenSet() const
{
    return m_testResultHasBeenSet;
}

BaseItem CovidItem::GetCodeColor() const
{
    return m_codeColor;
}

void CovidItem::SetCodeColor(const BaseItem& _codeColor)
{
    m_codeColor = _codeColor;
    m_codeColorHasBeenSet = true;
}

bool CovidItem::CodeColorHasBeenSet() const
{
    return m_codeColorHasBeenSet;
}

