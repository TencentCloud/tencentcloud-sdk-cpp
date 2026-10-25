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

#include <tencentcloud/rum/v20210622/model/EventFrame.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

EventFrame::EventFrame() :
    m_absPathHasBeenSet(false),
    m_colNoHasBeenSet(false),
    m_filenameHasBeenSet(false),
    m_functionHasBeenSet(false),
    m_lineNoHasBeenSet(false),
    m_inAppHasBeenSet(false),
    m_moduleHasBeenSet(false),
    m_packageHasBeenSet(false),
    m_stackLevelHasBeenSet(false)
{
}

CoreInternalOutcome EventFrame::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AbsPath") && !value["AbsPath"].IsNull())
    {
        if (!value["AbsPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventFrame.AbsPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_absPath = string(value["AbsPath"].GetString());
        m_absPathHasBeenSet = true;
    }

    if (value.HasMember("ColNo") && !value["ColNo"].IsNull())
    {
        if (!value["ColNo"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EventFrame.ColNo` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_colNo = value["ColNo"].GetInt64();
        m_colNoHasBeenSet = true;
    }

    if (value.HasMember("Filename") && !value["Filename"].IsNull())
    {
        if (!value["Filename"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventFrame.Filename` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filename = string(value["Filename"].GetString());
        m_filenameHasBeenSet = true;
    }

    if (value.HasMember("Function") && !value["Function"].IsNull())
    {
        if (!value["Function"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventFrame.Function` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_function = string(value["Function"].GetString());
        m_functionHasBeenSet = true;
    }

    if (value.HasMember("LineNo") && !value["LineNo"].IsNull())
    {
        if (!value["LineNo"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EventFrame.LineNo` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lineNo = value["LineNo"].GetInt64();
        m_lineNoHasBeenSet = true;
    }

    if (value.HasMember("InApp") && !value["InApp"].IsNull())
    {
        if (!value["InApp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EventFrame.InApp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_inApp = value["InApp"].GetInt64();
        m_inAppHasBeenSet = true;
    }

    if (value.HasMember("Module") && !value["Module"].IsNull())
    {
        if (!value["Module"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventFrame.Module` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_module = string(value["Module"].GetString());
        m_moduleHasBeenSet = true;
    }

    if (value.HasMember("Package") && !value["Package"].IsNull())
    {
        if (!value["Package"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventFrame.Package` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_package = string(value["Package"].GetString());
        m_packageHasBeenSet = true;
    }

    if (value.HasMember("StackLevel") && !value["StackLevel"].IsNull())
    {
        if (!value["StackLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EventFrame.StackLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_stackLevel = value["StackLevel"].GetInt64();
        m_stackLevelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EventFrame::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_absPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AbsPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_absPath.c_str(), allocator).Move(), allocator);
    }

    if (m_colNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_colNo, allocator);
    }

    if (m_filenameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filename";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filename.c_str(), allocator).Move(), allocator);
    }

    if (m_functionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Function";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_function.c_str(), allocator).Move(), allocator);
    }

    if (m_lineNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LineNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lineNo, allocator);
    }

    if (m_inAppHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InApp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inApp, allocator);
    }

    if (m_moduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Module";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_module.c_str(), allocator).Move(), allocator);
    }

    if (m_packageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Package";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_package.c_str(), allocator).Move(), allocator);
    }

    if (m_stackLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StackLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stackLevel, allocator);
    }

}


string EventFrame::GetAbsPath() const
{
    return m_absPath;
}

void EventFrame::SetAbsPath(const string& _absPath)
{
    m_absPath = _absPath;
    m_absPathHasBeenSet = true;
}

bool EventFrame::AbsPathHasBeenSet() const
{
    return m_absPathHasBeenSet;
}

int64_t EventFrame::GetColNo() const
{
    return m_colNo;
}

void EventFrame::SetColNo(const int64_t& _colNo)
{
    m_colNo = _colNo;
    m_colNoHasBeenSet = true;
}

bool EventFrame::ColNoHasBeenSet() const
{
    return m_colNoHasBeenSet;
}

string EventFrame::GetFilename() const
{
    return m_filename;
}

void EventFrame::SetFilename(const string& _filename)
{
    m_filename = _filename;
    m_filenameHasBeenSet = true;
}

bool EventFrame::FilenameHasBeenSet() const
{
    return m_filenameHasBeenSet;
}

string EventFrame::GetFunction() const
{
    return m_function;
}

void EventFrame::SetFunction(const string& _function)
{
    m_function = _function;
    m_functionHasBeenSet = true;
}

bool EventFrame::FunctionHasBeenSet() const
{
    return m_functionHasBeenSet;
}

int64_t EventFrame::GetLineNo() const
{
    return m_lineNo;
}

void EventFrame::SetLineNo(const int64_t& _lineNo)
{
    m_lineNo = _lineNo;
    m_lineNoHasBeenSet = true;
}

bool EventFrame::LineNoHasBeenSet() const
{
    return m_lineNoHasBeenSet;
}

int64_t EventFrame::GetInApp() const
{
    return m_inApp;
}

void EventFrame::SetInApp(const int64_t& _inApp)
{
    m_inApp = _inApp;
    m_inAppHasBeenSet = true;
}

bool EventFrame::InAppHasBeenSet() const
{
    return m_inAppHasBeenSet;
}

string EventFrame::GetModule() const
{
    return m_module;
}

void EventFrame::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool EventFrame::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

string EventFrame::GetPackage() const
{
    return m_package;
}

void EventFrame::SetPackage(const string& _package)
{
    m_package = _package;
    m_packageHasBeenSet = true;
}

bool EventFrame::PackageHasBeenSet() const
{
    return m_packageHasBeenSet;
}

int64_t EventFrame::GetStackLevel() const
{
    return m_stackLevel;
}

void EventFrame::SetStackLevel(const int64_t& _stackLevel)
{
    m_stackLevel = _stackLevel;
    m_stackLevelHasBeenSet = true;
}

bool EventFrame::StackLevelHasBeenSet() const
{
    return m_stackLevelHasBeenSet;
}

