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

#include <tencentcloud/tcss/v20201101/model/ContainerMount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ContainerMount::ContainerMount() :
    m_typeHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_rWHasBeenSet(false),
    m_propagationHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_driverHasBeenSet(false)
{
}

CoreInternalOutcome ContainerMount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerMount.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerMount.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("Destination") && !value["Destination"].IsNull())
    {
        if (!value["Destination"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerMount.Destination` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destination = string(value["Destination"].GetString());
        m_destinationHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerMount.Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(value["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("RW") && !value["RW"].IsNull())
    {
        if (!value["RW"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerMount.RW` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_rW = value["RW"].GetBool();
        m_rWHasBeenSet = true;
    }

    if (value.HasMember("Propagation") && !value["Propagation"].IsNull())
    {
        if (!value["Propagation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerMount.Propagation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_propagation = string(value["Propagation"].GetString());
        m_propagationHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerMount.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Driver") && !value["Driver"].IsNull())
    {
        if (!value["Driver"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerMount.Driver` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_driver = string(value["Driver"].GetString());
        m_driverHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ContainerMount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Destination";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destination.c_str(), allocator).Move(), allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_rWHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RW";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rW, allocator);
    }

    if (m_propagationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Propagation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_propagation.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_driverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Driver";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_driver.c_str(), allocator).Move(), allocator);
    }

}


string ContainerMount::GetType() const
{
    return m_type;
}

void ContainerMount::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ContainerMount::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ContainerMount::GetSource() const
{
    return m_source;
}

void ContainerMount::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool ContainerMount::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string ContainerMount::GetDestination() const
{
    return m_destination;
}

void ContainerMount::SetDestination(const string& _destination)
{
    m_destination = _destination;
    m_destinationHasBeenSet = true;
}

bool ContainerMount::DestinationHasBeenSet() const
{
    return m_destinationHasBeenSet;
}

string ContainerMount::GetMode() const
{
    return m_mode;
}

void ContainerMount::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool ContainerMount::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

bool ContainerMount::GetRW() const
{
    return m_rW;
}

void ContainerMount::SetRW(const bool& _rW)
{
    m_rW = _rW;
    m_rWHasBeenSet = true;
}

bool ContainerMount::RWHasBeenSet() const
{
    return m_rWHasBeenSet;
}

string ContainerMount::GetPropagation() const
{
    return m_propagation;
}

void ContainerMount::SetPropagation(const string& _propagation)
{
    m_propagation = _propagation;
    m_propagationHasBeenSet = true;
}

bool ContainerMount::PropagationHasBeenSet() const
{
    return m_propagationHasBeenSet;
}

string ContainerMount::GetName() const
{
    return m_name;
}

void ContainerMount::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ContainerMount::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ContainerMount::GetDriver() const
{
    return m_driver;
}

void ContainerMount::SetDriver(const string& _driver)
{
    m_driver = _driver;
    m_driverHasBeenSet = true;
}

bool ContainerMount::DriverHasBeenSet() const
{
    return m_driverHasBeenSet;
}

