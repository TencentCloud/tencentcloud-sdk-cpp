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

#include <tencentcloud/adp/v20260520/model/DocumentParseUsageDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

DocumentParseUsageDetail::DocumentParseUsageDetail() :
    m_appIdHasBeenSet(false),
    m_consumptionPuHasBeenSet(false),
    m_docIdHasBeenSet(false),
    m_docUsageMethodHasBeenSet(false),
    m_kbIdHasBeenSet(false),
    m_parsedPageCountHasBeenSet(false)
{
}

CoreInternalOutcome DocumentParseUsageDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentParseUsageDetail.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("ConsumptionPu") && !value["ConsumptionPu"].IsNull())
    {
        if (!value["ConsumptionPu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentParseUsageDetail.ConsumptionPu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_consumptionPu = value["ConsumptionPu"].GetDouble();
        m_consumptionPuHasBeenSet = true;
    }

    if (value.HasMember("DocId") && !value["DocId"].IsNull())
    {
        if (!value["DocId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentParseUsageDetail.DocId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_docId = string(value["DocId"].GetString());
        m_docIdHasBeenSet = true;
    }

    if (value.HasMember("DocUsageMethod") && !value["DocUsageMethod"].IsNull())
    {
        if (!value["DocUsageMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentParseUsageDetail.DocUsageMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_docUsageMethod = string(value["DocUsageMethod"].GetString());
        m_docUsageMethodHasBeenSet = true;
    }

    if (value.HasMember("KbId") && !value["KbId"].IsNull())
    {
        if (!value["KbId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentParseUsageDetail.KbId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kbId = string(value["KbId"].GetString());
        m_kbIdHasBeenSet = true;
    }

    if (value.HasMember("ParsedPageCount") && !value["ParsedPageCount"].IsNull())
    {
        if (!value["ParsedPageCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentParseUsageDetail.ParsedPageCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parsedPageCount = string(value["ParsedPageCount"].GetString());
        m_parsedPageCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DocumentParseUsageDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_consumptionPuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumptionPu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consumptionPu, allocator);
    }

    if (m_docIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_docId.c_str(), allocator).Move(), allocator);
    }

    if (m_docUsageMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocUsageMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_docUsageMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_kbIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KbId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kbId.c_str(), allocator).Move(), allocator);
    }

    if (m_parsedPageCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParsedPageCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parsedPageCount.c_str(), allocator).Move(), allocator);
    }

}


string DocumentParseUsageDetail::GetAppId() const
{
    return m_appId;
}

void DocumentParseUsageDetail::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DocumentParseUsageDetail::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

double DocumentParseUsageDetail::GetConsumptionPu() const
{
    return m_consumptionPu;
}

void DocumentParseUsageDetail::SetConsumptionPu(const double& _consumptionPu)
{
    m_consumptionPu = _consumptionPu;
    m_consumptionPuHasBeenSet = true;
}

bool DocumentParseUsageDetail::ConsumptionPuHasBeenSet() const
{
    return m_consumptionPuHasBeenSet;
}

string DocumentParseUsageDetail::GetDocId() const
{
    return m_docId;
}

void DocumentParseUsageDetail::SetDocId(const string& _docId)
{
    m_docId = _docId;
    m_docIdHasBeenSet = true;
}

bool DocumentParseUsageDetail::DocIdHasBeenSet() const
{
    return m_docIdHasBeenSet;
}

string DocumentParseUsageDetail::GetDocUsageMethod() const
{
    return m_docUsageMethod;
}

void DocumentParseUsageDetail::SetDocUsageMethod(const string& _docUsageMethod)
{
    m_docUsageMethod = _docUsageMethod;
    m_docUsageMethodHasBeenSet = true;
}

bool DocumentParseUsageDetail::DocUsageMethodHasBeenSet() const
{
    return m_docUsageMethodHasBeenSet;
}

string DocumentParseUsageDetail::GetKbId() const
{
    return m_kbId;
}

void DocumentParseUsageDetail::SetKbId(const string& _kbId)
{
    m_kbId = _kbId;
    m_kbIdHasBeenSet = true;
}

bool DocumentParseUsageDetail::KbIdHasBeenSet() const
{
    return m_kbIdHasBeenSet;
}

string DocumentParseUsageDetail::GetParsedPageCount() const
{
    return m_parsedPageCount;
}

void DocumentParseUsageDetail::SetParsedPageCount(const string& _parsedPageCount)
{
    m_parsedPageCount = _parsedPageCount;
    m_parsedPageCountHasBeenSet = true;
}

bool DocumentParseUsageDetail::ParsedPageCountHasBeenSet() const
{
    return m_parsedPageCountHasBeenSet;
}

