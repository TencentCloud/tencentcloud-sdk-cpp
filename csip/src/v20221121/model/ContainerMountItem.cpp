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

#include <tencentcloud/csip/v20221121/model/ContainerMountItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ContainerMountItem::ContainerMountItem() :
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

CoreInternalOutcome ContainerMountItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerMountItem.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerMountItem.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("Destination") && !value["Destination"].IsNull())
    {
        if (!value["Destination"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerMountItem.Destination` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destination = string(value["Destination"].GetString());
        m_destinationHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerMountItem.Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(value["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("RW") && !value["RW"].IsNull())
    {
        if (!value["RW"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerMountItem.RW` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_rW = value["RW"].GetBool();
        m_rWHasBeenSet = true;
    }

    if (value.HasMember("Propagation") && !value["Propagation"].IsNull())
    {
        if (!value["Propagation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerMountItem.Propagation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_propagation = string(value["Propagation"].GetString());
        m_propagationHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerMountItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Driver") && !value["Driver"].IsNull())
    {
        if (!value["Driver"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerMountItem.Driver` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_driver = string(value["Driver"].GetString());
        m_driverHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ContainerMountItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


string ContainerMountItem::GetType() const
{
    return m_type;
}

void ContainerMountItem::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ContainerMountItem::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ContainerMountItem::GetSource() const
{
    return m_source;
}

void ContainerMountItem::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool ContainerMountItem::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string ContainerMountItem::GetDestination() const
{
    return m_destination;
}

void ContainerMountItem::SetDestination(const string& _destination)
{
    m_destination = _destination;
    m_destinationHasBeenSet = true;
}

bool ContainerMountItem::DestinationHasBeenSet() const
{
    return m_destinationHasBeenSet;
}

string ContainerMountItem::GetMode() const
{
    return m_mode;
}

void ContainerMountItem::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool ContainerMountItem::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

bool ContainerMountItem::GetRW() const
{
    return m_rW;
}

void ContainerMountItem::SetRW(const bool& _rW)
{
    m_rW = _rW;
    m_rWHasBeenSet = true;
}

bool ContainerMountItem::RWHasBeenSet() const
{
    return m_rWHasBeenSet;
}

string ContainerMountItem::GetPropagation() const
{
    return m_propagation;
}

void ContainerMountItem::SetPropagation(const string& _propagation)
{
    m_propagation = _propagation;
    m_propagationHasBeenSet = true;
}

bool ContainerMountItem::PropagationHasBeenSet() const
{
    return m_propagationHasBeenSet;
}

string ContainerMountItem::GetName() const
{
    return m_name;
}

void ContainerMountItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ContainerMountItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ContainerMountItem::GetDriver() const
{
    return m_driver;
}

void ContainerMountItem::SetDriver(const string& _driver)
{
    m_driver = _driver;
    m_driverHasBeenSet = true;
}

bool ContainerMountItem::DriverHasBeenSet() const
{
    return m_driverHasBeenSet;
}

