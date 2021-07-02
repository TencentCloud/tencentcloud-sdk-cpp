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

#include <tencentcloud/mrs/v20200910/model/Tuber.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

Tuber::Tuber() :
    m_partHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_sizeListHasBeenSet(false),
    m_shapeHasBeenSet(false),
    m_edgeHasBeenSet(false),
    m_cDFIHasBeenSet(false),
    m_metabolismHasBeenSet(false),
    m_lymphGlandHasBeenSet(false),
    m_lymphDoorHasBeenSet(false),
    m_skinMedullaHasBeenSet(false),
    m_innerEchoHasBeenSet(false),
    m_rearEchoHasBeenSet(false),
    m_envelopeHasBeenSet(false),
    m_calcificationHasBeenSet(false),
    m_enhancementHasBeenSet(false),
    m_aspectRatioHasBeenSet(false)
{
}

CoreInternalOutcome Tuber::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Part") && !value["Part"].IsNull())
    {
        if (!value["Part"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Tuber.Part` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_part.Deserialize(value["Part"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_partHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Tuber.Type` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_type.Deserialize(value["Type"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_typeHasBeenSet = true;
    }

    if (value.HasMember("SizeList") && !value["SizeList"].IsNull())
    {
        if (!value["SizeList"].IsArray())
            return CoreInternalOutcome(Error("response `Tuber.SizeList` is not array type"));

        const rapidjson::Value &tmpValue = value["SizeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Attribute item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sizeList.push_back(item);
        }
        m_sizeListHasBeenSet = true;
    }

    if (value.HasMember("Shape") && !value["Shape"].IsNull())
    {
        if (!value["Shape"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Tuber.Shape` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_shape.Deserialize(value["Shape"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_shapeHasBeenSet = true;
    }

    if (value.HasMember("Edge") && !value["Edge"].IsNull())
    {
        if (!value["Edge"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Tuber.Edge` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_edge.Deserialize(value["Edge"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_edgeHasBeenSet = true;
    }

    if (value.HasMember("CDFI") && !value["CDFI"].IsNull())
    {
        if (!value["CDFI"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Tuber.CDFI` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cDFI.Deserialize(value["CDFI"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cDFIHasBeenSet = true;
    }

    if (value.HasMember("Metabolism") && !value["Metabolism"].IsNull())
    {
        if (!value["Metabolism"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Tuber.Metabolism` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_metabolism.Deserialize(value["Metabolism"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_metabolismHasBeenSet = true;
    }

    if (value.HasMember("LymphGland") && !value["LymphGland"].IsNull())
    {
        if (!value["LymphGland"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Tuber.LymphGland` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_lymphGland.Deserialize(value["LymphGland"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_lymphGlandHasBeenSet = true;
    }

    if (value.HasMember("LymphDoor") && !value["LymphDoor"].IsNull())
    {
        if (!value["LymphDoor"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Tuber.LymphDoor` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_lymphDoor.Deserialize(value["LymphDoor"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_lymphDoorHasBeenSet = true;
    }

    if (value.HasMember("SkinMedulla") && !value["SkinMedulla"].IsNull())
    {
        if (!value["SkinMedulla"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Tuber.SkinMedulla` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_skinMedulla.Deserialize(value["SkinMedulla"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_skinMedullaHasBeenSet = true;
    }

    if (value.HasMember("InnerEcho") && !value["InnerEcho"].IsNull())
    {
        if (!value["InnerEcho"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Tuber.InnerEcho` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_innerEcho.Deserialize(value["InnerEcho"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_innerEchoHasBeenSet = true;
    }

    if (value.HasMember("RearEcho") && !value["RearEcho"].IsNull())
    {
        if (!value["RearEcho"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Tuber.RearEcho` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rearEcho.Deserialize(value["RearEcho"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rearEchoHasBeenSet = true;
    }

    if (value.HasMember("Envelope") && !value["Envelope"].IsNull())
    {
        if (!value["Envelope"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Tuber.Envelope` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_envelope.Deserialize(value["Envelope"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_envelopeHasBeenSet = true;
    }

    if (value.HasMember("Calcification") && !value["Calcification"].IsNull())
    {
        if (!value["Calcification"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Tuber.Calcification` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_calcification.Deserialize(value["Calcification"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_calcificationHasBeenSet = true;
    }

    if (value.HasMember("Enhancement") && !value["Enhancement"].IsNull())
    {
        if (!value["Enhancement"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Tuber.Enhancement` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_enhancement.Deserialize(value["Enhancement"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_enhancementHasBeenSet = true;
    }

    if (value.HasMember("AspectRatio") && !value["AspectRatio"].IsNull())
    {
        if (!value["AspectRatio"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Tuber.AspectRatio` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_aspectRatio.Deserialize(value["AspectRatio"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_aspectRatioHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Tuber::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_partHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Part";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_part.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_type.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sizeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SizeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sizeList.begin(); itr != m_sizeList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_shapeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Shape";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_shape.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_edgeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Edge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_edge.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cDFIHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CDFI";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cDFI.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_metabolismHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metabolism";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_metabolism.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_lymphGlandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LymphGland";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_lymphGland.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_lymphDoorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LymphDoor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_lymphDoor.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_skinMedullaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkinMedulla";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_skinMedulla.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_innerEchoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InnerEcho";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_innerEcho.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_rearEchoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RearEcho";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rearEcho.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_envelopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Envelope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_envelope.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_calcificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Calcification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_calcification.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_enhancementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enhancement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_enhancement.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_aspectRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AspectRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aspectRatio.ToJsonObject(value[key.c_str()], allocator);
    }

}


Attribute Tuber::GetPart() const
{
    return m_part;
}

void Tuber::SetPart(const Attribute& _part)
{
    m_part = _part;
    m_partHasBeenSet = true;
}

bool Tuber::PartHasBeenSet() const
{
    return m_partHasBeenSet;
}

Attribute Tuber::GetType() const
{
    return m_type;
}

void Tuber::SetType(const Attribute& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Tuber::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<Attribute> Tuber::GetSizeList() const
{
    return m_sizeList;
}

void Tuber::SetSizeList(const vector<Attribute>& _sizeList)
{
    m_sizeList = _sizeList;
    m_sizeListHasBeenSet = true;
}

bool Tuber::SizeListHasBeenSet() const
{
    return m_sizeListHasBeenSet;
}

Attribute Tuber::GetShape() const
{
    return m_shape;
}

void Tuber::SetShape(const Attribute& _shape)
{
    m_shape = _shape;
    m_shapeHasBeenSet = true;
}

bool Tuber::ShapeHasBeenSet() const
{
    return m_shapeHasBeenSet;
}

Attribute Tuber::GetEdge() const
{
    return m_edge;
}

void Tuber::SetEdge(const Attribute& _edge)
{
    m_edge = _edge;
    m_edgeHasBeenSet = true;
}

bool Tuber::EdgeHasBeenSet() const
{
    return m_edgeHasBeenSet;
}

Attribute Tuber::GetCDFI() const
{
    return m_cDFI;
}

void Tuber::SetCDFI(const Attribute& _cDFI)
{
    m_cDFI = _cDFI;
    m_cDFIHasBeenSet = true;
}

bool Tuber::CDFIHasBeenSet() const
{
    return m_cDFIHasBeenSet;
}

Attribute Tuber::GetMetabolism() const
{
    return m_metabolism;
}

void Tuber::SetMetabolism(const Attribute& _metabolism)
{
    m_metabolism = _metabolism;
    m_metabolismHasBeenSet = true;
}

bool Tuber::MetabolismHasBeenSet() const
{
    return m_metabolismHasBeenSet;
}

Attribute Tuber::GetLymphGland() const
{
    return m_lymphGland;
}

void Tuber::SetLymphGland(const Attribute& _lymphGland)
{
    m_lymphGland = _lymphGland;
    m_lymphGlandHasBeenSet = true;
}

bool Tuber::LymphGlandHasBeenSet() const
{
    return m_lymphGlandHasBeenSet;
}

Attribute Tuber::GetLymphDoor() const
{
    return m_lymphDoor;
}

void Tuber::SetLymphDoor(const Attribute& _lymphDoor)
{
    m_lymphDoor = _lymphDoor;
    m_lymphDoorHasBeenSet = true;
}

bool Tuber::LymphDoorHasBeenSet() const
{
    return m_lymphDoorHasBeenSet;
}

Attribute Tuber::GetSkinMedulla() const
{
    return m_skinMedulla;
}

void Tuber::SetSkinMedulla(const Attribute& _skinMedulla)
{
    m_skinMedulla = _skinMedulla;
    m_skinMedullaHasBeenSet = true;
}

bool Tuber::SkinMedullaHasBeenSet() const
{
    return m_skinMedullaHasBeenSet;
}

Attribute Tuber::GetInnerEcho() const
{
    return m_innerEcho;
}

void Tuber::SetInnerEcho(const Attribute& _innerEcho)
{
    m_innerEcho = _innerEcho;
    m_innerEchoHasBeenSet = true;
}

bool Tuber::InnerEchoHasBeenSet() const
{
    return m_innerEchoHasBeenSet;
}

Attribute Tuber::GetRearEcho() const
{
    return m_rearEcho;
}

void Tuber::SetRearEcho(const Attribute& _rearEcho)
{
    m_rearEcho = _rearEcho;
    m_rearEchoHasBeenSet = true;
}

bool Tuber::RearEchoHasBeenSet() const
{
    return m_rearEchoHasBeenSet;
}

Attribute Tuber::GetEnvelope() const
{
    return m_envelope;
}

void Tuber::SetEnvelope(const Attribute& _envelope)
{
    m_envelope = _envelope;
    m_envelopeHasBeenSet = true;
}

bool Tuber::EnvelopeHasBeenSet() const
{
    return m_envelopeHasBeenSet;
}

Attribute Tuber::GetCalcification() const
{
    return m_calcification;
}

void Tuber::SetCalcification(const Attribute& _calcification)
{
    m_calcification = _calcification;
    m_calcificationHasBeenSet = true;
}

bool Tuber::CalcificationHasBeenSet() const
{
    return m_calcificationHasBeenSet;
}

Attribute Tuber::GetEnhancement() const
{
    return m_enhancement;
}

void Tuber::SetEnhancement(const Attribute& _enhancement)
{
    m_enhancement = _enhancement;
    m_enhancementHasBeenSet = true;
}

bool Tuber::EnhancementHasBeenSet() const
{
    return m_enhancementHasBeenSet;
}

Attribute Tuber::GetAspectRatio() const
{
    return m_aspectRatio;
}

void Tuber::SetAspectRatio(const Attribute& _aspectRatio)
{
    m_aspectRatio = _aspectRatio;
    m_aspectRatioHasBeenSet = true;
}

bool Tuber::AspectRatioHasBeenSet() const
{
    return m_aspectRatioHasBeenSet;
}

