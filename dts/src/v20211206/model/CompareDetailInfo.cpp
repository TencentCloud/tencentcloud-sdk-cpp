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

#include <tencentcloud/dts/v20211206/model/CompareDetailInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

CompareDetailInfo::CompareDetailInfo() :
    m_differenceHasBeenSet(false),
    m_skippedHasBeenSet(false),
    m_differenceAdvancedObjectsHasBeenSet(false),
    m_differenceDataHasBeenSet(false),
    m_differenceRowHasBeenSet(false)
{
}

CoreInternalOutcome CompareDetailInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Difference") && !value["Difference"].IsNull())
    {
        if (!value["Difference"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CompareDetailInfo.Difference` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_difference.Deserialize(value["Difference"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_differenceHasBeenSet = true;
    }

    if (value.HasMember("Skipped") && !value["Skipped"].IsNull())
    {
        if (!value["Skipped"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CompareDetailInfo.Skipped` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_skipped.Deserialize(value["Skipped"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_skippedHasBeenSet = true;
    }

    if (value.HasMember("DifferenceAdvancedObjects") && !value["DifferenceAdvancedObjects"].IsNull())
    {
        if (!value["DifferenceAdvancedObjects"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CompareDetailInfo.DifferenceAdvancedObjects` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_differenceAdvancedObjects.Deserialize(value["DifferenceAdvancedObjects"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_differenceAdvancedObjectsHasBeenSet = true;
    }

    if (value.HasMember("DifferenceData") && !value["DifferenceData"].IsNull())
    {
        if (!value["DifferenceData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CompareDetailInfo.DifferenceData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_differenceData.Deserialize(value["DifferenceData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_differenceDataHasBeenSet = true;
    }

    if (value.HasMember("DifferenceRow") && !value["DifferenceRow"].IsNull())
    {
        if (!value["DifferenceRow"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CompareDetailInfo.DifferenceRow` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_differenceRow.Deserialize(value["DifferenceRow"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_differenceRowHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CompareDetailInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_differenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Difference";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_difference.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_skippedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Skipped";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_skipped.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_differenceAdvancedObjectsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DifferenceAdvancedObjects";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_differenceAdvancedObjects.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_differenceDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DifferenceData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_differenceData.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_differenceRowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DifferenceRow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_differenceRow.ToJsonObject(value[key.c_str()], allocator);
    }

}


DifferenceDetail CompareDetailInfo::GetDifference() const
{
    return m_difference;
}

void CompareDetailInfo::SetDifference(const DifferenceDetail& _difference)
{
    m_difference = _difference;
    m_differenceHasBeenSet = true;
}

bool CompareDetailInfo::DifferenceHasBeenSet() const
{
    return m_differenceHasBeenSet;
}

SkippedDetail CompareDetailInfo::GetSkipped() const
{
    return m_skipped;
}

void CompareDetailInfo::SetSkipped(const SkippedDetail& _skipped)
{
    m_skipped = _skipped;
    m_skippedHasBeenSet = true;
}

bool CompareDetailInfo::SkippedHasBeenSet() const
{
    return m_skippedHasBeenSet;
}

DifferenceAdvancedObjectsDetail CompareDetailInfo::GetDifferenceAdvancedObjects() const
{
    return m_differenceAdvancedObjects;
}

void CompareDetailInfo::SetDifferenceAdvancedObjects(const DifferenceAdvancedObjectsDetail& _differenceAdvancedObjects)
{
    m_differenceAdvancedObjects = _differenceAdvancedObjects;
    m_differenceAdvancedObjectsHasBeenSet = true;
}

bool CompareDetailInfo::DifferenceAdvancedObjectsHasBeenSet() const
{
    return m_differenceAdvancedObjectsHasBeenSet;
}

DifferenceDataDetail CompareDetailInfo::GetDifferenceData() const
{
    return m_differenceData;
}

void CompareDetailInfo::SetDifferenceData(const DifferenceDataDetail& _differenceData)
{
    m_differenceData = _differenceData;
    m_differenceDataHasBeenSet = true;
}

bool CompareDetailInfo::DifferenceDataHasBeenSet() const
{
    return m_differenceDataHasBeenSet;
}

DifferenceRowDetail CompareDetailInfo::GetDifferenceRow() const
{
    return m_differenceRow;
}

void CompareDetailInfo::SetDifferenceRow(const DifferenceRowDetail& _differenceRow)
{
    m_differenceRow = _differenceRow;
    m_differenceRowHasBeenSet = true;
}

bool CompareDetailInfo::DifferenceRowHasBeenSet() const
{
    return m_differenceRowHasBeenSet;
}

