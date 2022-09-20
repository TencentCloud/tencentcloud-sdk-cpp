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

#include <tencentcloud/teo/v20220901/model/SpeedTestingStatistics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

SpeedTestingStatistics::SpeedTestingStatistics() :
    m_firstContentfulPaintHasBeenSet(false),
    m_firstMeaningfulPaintHasBeenSet(false),
    m_overallDownloadSpeedHasBeenSet(false),
    m_renderTimeHasBeenSet(false),
    m_documentFinishTimeHasBeenSet(false),
    m_tcpConnectionTimeHasBeenSet(false),
    m_responseTimeHasBeenSet(false),
    m_fileDownloadTimeHasBeenSet(false),
    m_loadTimeHasBeenSet(false)
{
}

CoreInternalOutcome SpeedTestingStatistics::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FirstContentfulPaint") && !value["FirstContentfulPaint"].IsNull())
    {
        if (!value["FirstContentfulPaint"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SpeedTestingStatistics.FirstContentfulPaint` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_firstContentfulPaint = value["FirstContentfulPaint"].GetInt64();
        m_firstContentfulPaintHasBeenSet = true;
    }

    if (value.HasMember("FirstMeaningfulPaint") && !value["FirstMeaningfulPaint"].IsNull())
    {
        if (!value["FirstMeaningfulPaint"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SpeedTestingStatistics.FirstMeaningfulPaint` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_firstMeaningfulPaint = value["FirstMeaningfulPaint"].GetInt64();
        m_firstMeaningfulPaintHasBeenSet = true;
    }

    if (value.HasMember("OverallDownloadSpeed") && !value["OverallDownloadSpeed"].IsNull())
    {
        if (!value["OverallDownloadSpeed"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SpeedTestingStatistics.OverallDownloadSpeed` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_overallDownloadSpeed = value["OverallDownloadSpeed"].GetDouble();
        m_overallDownloadSpeedHasBeenSet = true;
    }

    if (value.HasMember("RenderTime") && !value["RenderTime"].IsNull())
    {
        if (!value["RenderTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SpeedTestingStatistics.RenderTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_renderTime = value["RenderTime"].GetInt64();
        m_renderTimeHasBeenSet = true;
    }

    if (value.HasMember("DocumentFinishTime") && !value["DocumentFinishTime"].IsNull())
    {
        if (!value["DocumentFinishTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SpeedTestingStatistics.DocumentFinishTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_documentFinishTime = value["DocumentFinishTime"].GetInt64();
        m_documentFinishTimeHasBeenSet = true;
    }

    if (value.HasMember("TcpConnectionTime") && !value["TcpConnectionTime"].IsNull())
    {
        if (!value["TcpConnectionTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SpeedTestingStatistics.TcpConnectionTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tcpConnectionTime = value["TcpConnectionTime"].GetInt64();
        m_tcpConnectionTimeHasBeenSet = true;
    }

    if (value.HasMember("ResponseTime") && !value["ResponseTime"].IsNull())
    {
        if (!value["ResponseTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SpeedTestingStatistics.ResponseTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_responseTime = value["ResponseTime"].GetInt64();
        m_responseTimeHasBeenSet = true;
    }

    if (value.HasMember("FileDownloadTime") && !value["FileDownloadTime"].IsNull())
    {
        if (!value["FileDownloadTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SpeedTestingStatistics.FileDownloadTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileDownloadTime = value["FileDownloadTime"].GetInt64();
        m_fileDownloadTimeHasBeenSet = true;
    }

    if (value.HasMember("LoadTime") && !value["LoadTime"].IsNull())
    {
        if (!value["LoadTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SpeedTestingStatistics.LoadTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_loadTime = value["LoadTime"].GetInt64();
        m_loadTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SpeedTestingStatistics::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_firstContentfulPaintHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstContentfulPaint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_firstContentfulPaint, allocator);
    }

    if (m_firstMeaningfulPaintHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstMeaningfulPaint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_firstMeaningfulPaint, allocator);
    }

    if (m_overallDownloadSpeedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OverallDownloadSpeed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_overallDownloadSpeed, allocator);
    }

    if (m_renderTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenderTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_renderTime, allocator);
    }

    if (m_documentFinishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocumentFinishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_documentFinishTime, allocator);
    }

    if (m_tcpConnectionTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TcpConnectionTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tcpConnectionTime, allocator);
    }

    if (m_responseTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_responseTime, allocator);
    }

    if (m_fileDownloadTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileDownloadTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileDownloadTime, allocator);
    }

    if (m_loadTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loadTime, allocator);
    }

}


int64_t SpeedTestingStatistics::GetFirstContentfulPaint() const
{
    return m_firstContentfulPaint;
}

void SpeedTestingStatistics::SetFirstContentfulPaint(const int64_t& _firstContentfulPaint)
{
    m_firstContentfulPaint = _firstContentfulPaint;
    m_firstContentfulPaintHasBeenSet = true;
}

bool SpeedTestingStatistics::FirstContentfulPaintHasBeenSet() const
{
    return m_firstContentfulPaintHasBeenSet;
}

int64_t SpeedTestingStatistics::GetFirstMeaningfulPaint() const
{
    return m_firstMeaningfulPaint;
}

void SpeedTestingStatistics::SetFirstMeaningfulPaint(const int64_t& _firstMeaningfulPaint)
{
    m_firstMeaningfulPaint = _firstMeaningfulPaint;
    m_firstMeaningfulPaintHasBeenSet = true;
}

bool SpeedTestingStatistics::FirstMeaningfulPaintHasBeenSet() const
{
    return m_firstMeaningfulPaintHasBeenSet;
}

double SpeedTestingStatistics::GetOverallDownloadSpeed() const
{
    return m_overallDownloadSpeed;
}

void SpeedTestingStatistics::SetOverallDownloadSpeed(const double& _overallDownloadSpeed)
{
    m_overallDownloadSpeed = _overallDownloadSpeed;
    m_overallDownloadSpeedHasBeenSet = true;
}

bool SpeedTestingStatistics::OverallDownloadSpeedHasBeenSet() const
{
    return m_overallDownloadSpeedHasBeenSet;
}

int64_t SpeedTestingStatistics::GetRenderTime() const
{
    return m_renderTime;
}

void SpeedTestingStatistics::SetRenderTime(const int64_t& _renderTime)
{
    m_renderTime = _renderTime;
    m_renderTimeHasBeenSet = true;
}

bool SpeedTestingStatistics::RenderTimeHasBeenSet() const
{
    return m_renderTimeHasBeenSet;
}

int64_t SpeedTestingStatistics::GetDocumentFinishTime() const
{
    return m_documentFinishTime;
}

void SpeedTestingStatistics::SetDocumentFinishTime(const int64_t& _documentFinishTime)
{
    m_documentFinishTime = _documentFinishTime;
    m_documentFinishTimeHasBeenSet = true;
}

bool SpeedTestingStatistics::DocumentFinishTimeHasBeenSet() const
{
    return m_documentFinishTimeHasBeenSet;
}

int64_t SpeedTestingStatistics::GetTcpConnectionTime() const
{
    return m_tcpConnectionTime;
}

void SpeedTestingStatistics::SetTcpConnectionTime(const int64_t& _tcpConnectionTime)
{
    m_tcpConnectionTime = _tcpConnectionTime;
    m_tcpConnectionTimeHasBeenSet = true;
}

bool SpeedTestingStatistics::TcpConnectionTimeHasBeenSet() const
{
    return m_tcpConnectionTimeHasBeenSet;
}

int64_t SpeedTestingStatistics::GetResponseTime() const
{
    return m_responseTime;
}

void SpeedTestingStatistics::SetResponseTime(const int64_t& _responseTime)
{
    m_responseTime = _responseTime;
    m_responseTimeHasBeenSet = true;
}

bool SpeedTestingStatistics::ResponseTimeHasBeenSet() const
{
    return m_responseTimeHasBeenSet;
}

int64_t SpeedTestingStatistics::GetFileDownloadTime() const
{
    return m_fileDownloadTime;
}

void SpeedTestingStatistics::SetFileDownloadTime(const int64_t& _fileDownloadTime)
{
    m_fileDownloadTime = _fileDownloadTime;
    m_fileDownloadTimeHasBeenSet = true;
}

bool SpeedTestingStatistics::FileDownloadTimeHasBeenSet() const
{
    return m_fileDownloadTimeHasBeenSet;
}

int64_t SpeedTestingStatistics::GetLoadTime() const
{
    return m_loadTime;
}

void SpeedTestingStatistics::SetLoadTime(const int64_t& _loadTime)
{
    m_loadTime = _loadTime;
    m_loadTimeHasBeenSet = true;
}

bool SpeedTestingStatistics::LoadTimeHasBeenSet() const
{
    return m_loadTimeHasBeenSet;
}

