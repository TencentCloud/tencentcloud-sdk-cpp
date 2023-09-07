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

#include <tencentcloud/mrs/v20200910/model/Organ.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

Organ::Organ() :
    m_partHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_envelopeHasBeenSet(false),
    m_edgeHasBeenSet(false),
    m_innerEchoHasBeenSet(false),
    m_glandHasBeenSet(false),
    m_shapeHasBeenSet(false),
    m_thicknessHasBeenSet(false),
    m_shapeAttrHasBeenSet(false),
    m_cDFIHasBeenSet(false),
    m_symDescHasBeenSet(false),
    m_sizeStatusHasBeenSet(false),
    m_outlineHasBeenSet(false),
    m_structureHasBeenSet(false),
    m_densityHasBeenSet(false),
    m_vasHasBeenSet(false),
    m_cysticwallHasBeenSet(false),
    m_capsuleHasBeenSet(false),
    m_isthmusThickneseHasBeenSet(false),
    m_innerEchoDistributionHasBeenSet(false),
    m_srcHasBeenSet(false),
    m_indexHasBeenSet(false),
    m_transparentHasBeenSet(false),
    m_mriAdcHasBeenSet(false),
    m_mriDwiHasBeenSet(false),
    m_mriT1HasBeenSet(false),
    m_mriT2HasBeenSet(false),
    m_ctHuHasBeenSet(false),
    m_suvmaxHasBeenSet(false),
    m_metabolismHasBeenSet(false),
    m_radioactiveUptakeHasBeenSet(false),
    m_lymphEnlargementHasBeenSet(false),
    m_imageFeatureHasBeenSet(false),
    m_ductHasBeenSet(false),
    m_trendHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_coordsHasBeenSet(false),
    m_isthmusThicknessHasBeenSet(false)
{
}

CoreInternalOutcome Organ::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Part") && !value["Part"].IsNull())
    {
        if (!value["Part"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Organ.Part` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_part.Deserialize(value["Part"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_partHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Organ.Size` is not array type"));

        const rapidjson::Value &tmpValue = value["Size"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Size item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_size.push_back(item);
        }
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("Envelope") && !value["Envelope"].IsNull())
    {
        if (!value["Envelope"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Organ.Envelope` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_envelope.Deserialize(value["Envelope"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_envelopeHasBeenSet = true;
    }

    if (value.HasMember("Edge") && !value["Edge"].IsNull())
    {
        if (!value["Edge"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Organ.Edge` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_edge.Deserialize(value["Edge"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_edgeHasBeenSet = true;
    }

    if (value.HasMember("InnerEcho") && !value["InnerEcho"].IsNull())
    {
        if (!value["InnerEcho"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Organ.InnerEcho` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_innerEcho.Deserialize(value["InnerEcho"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_innerEchoHasBeenSet = true;
    }

    if (value.HasMember("Gland") && !value["Gland"].IsNull())
    {
        if (!value["Gland"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Organ.Gland` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_gland.Deserialize(value["Gland"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_glandHasBeenSet = true;
    }

    if (value.HasMember("Shape") && !value["Shape"].IsNull())
    {
        if (!value["Shape"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Organ.Shape` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_shape.Deserialize(value["Shape"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_shapeHasBeenSet = true;
    }

    if (value.HasMember("Thickness") && !value["Thickness"].IsNull())
    {
        if (!value["Thickness"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Organ.Thickness` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_thickness.Deserialize(value["Thickness"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_thicknessHasBeenSet = true;
    }

    if (value.HasMember("ShapeAttr") && !value["ShapeAttr"].IsNull())
    {
        if (!value["ShapeAttr"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Organ.ShapeAttr` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_shapeAttr.Deserialize(value["ShapeAttr"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_shapeAttrHasBeenSet = true;
    }

    if (value.HasMember("CDFI") && !value["CDFI"].IsNull())
    {
        if (!value["CDFI"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Organ.CDFI` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cDFI.Deserialize(value["CDFI"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cDFIHasBeenSet = true;
    }

    if (value.HasMember("SymDesc") && !value["SymDesc"].IsNull())
    {
        if (!value["SymDesc"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Organ.SymDesc` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_symDesc.Deserialize(value["SymDesc"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_symDescHasBeenSet = true;
    }

    if (value.HasMember("SizeStatus") && !value["SizeStatus"].IsNull())
    {
        if (!value["SizeStatus"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Organ.SizeStatus` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sizeStatus.Deserialize(value["SizeStatus"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sizeStatusHasBeenSet = true;
    }

    if (value.HasMember("Outline") && !value["Outline"].IsNull())
    {
        if (!value["Outline"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Organ.Outline` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_outline.Deserialize(value["Outline"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_outlineHasBeenSet = true;
    }

    if (value.HasMember("Structure") && !value["Structure"].IsNull())
    {
        if (!value["Structure"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Organ.Structure` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_structure.Deserialize(value["Structure"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_structureHasBeenSet = true;
    }

    if (value.HasMember("Density") && !value["Density"].IsNull())
    {
        if (!value["Density"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Organ.Density` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_density.Deserialize(value["Density"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_densityHasBeenSet = true;
    }

    if (value.HasMember("Vas") && !value["Vas"].IsNull())
    {
        if (!value["Vas"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Organ.Vas` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vas.Deserialize(value["Vas"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vasHasBeenSet = true;
    }

    if (value.HasMember("Cysticwall") && !value["Cysticwall"].IsNull())
    {
        if (!value["Cysticwall"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Organ.Cysticwall` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cysticwall.Deserialize(value["Cysticwall"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cysticwallHasBeenSet = true;
    }

    if (value.HasMember("Capsule") && !value["Capsule"].IsNull())
    {
        if (!value["Capsule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Organ.Capsule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_capsule.Deserialize(value["Capsule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_capsuleHasBeenSet = true;
    }

    if (value.HasMember("IsthmusThicknese") && !value["IsthmusThicknese"].IsNull())
    {
        if (!value["IsthmusThicknese"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Organ.IsthmusThicknese` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_isthmusThicknese.Deserialize(value["IsthmusThicknese"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_isthmusThickneseHasBeenSet = true;
    }

    if (value.HasMember("InnerEchoDistribution") && !value["InnerEchoDistribution"].IsNull())
    {
        if (!value["InnerEchoDistribution"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Organ.InnerEchoDistribution` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_innerEchoDistribution.Deserialize(value["InnerEchoDistribution"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_innerEchoDistributionHasBeenSet = true;
    }

    if (value.HasMember("Src") && !value["Src"].IsNull())
    {
        if (!value["Src"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Organ.Src` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_src = string(value["Src"].GetString());
        m_srcHasBeenSet = true;
    }

    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Organ.Index` is not array type"));

        const rapidjson::Value &tmpValue = value["Index"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_index.push_back((*itr).GetInt64());
        }
        m_indexHasBeenSet = true;
    }

    if (value.HasMember("Transparent") && !value["Transparent"].IsNull())
    {
        if (!value["Transparent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Organ.Transparent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_transparent.Deserialize(value["Transparent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_transparentHasBeenSet = true;
    }

    if (value.HasMember("MriAdc") && !value["MriAdc"].IsNull())
    {
        if (!value["MriAdc"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Organ.MriAdc` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mriAdc.Deserialize(value["MriAdc"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mriAdcHasBeenSet = true;
    }

    if (value.HasMember("MriDwi") && !value["MriDwi"].IsNull())
    {
        if (!value["MriDwi"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Organ.MriDwi` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mriDwi.Deserialize(value["MriDwi"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mriDwiHasBeenSet = true;
    }

    if (value.HasMember("MriT1") && !value["MriT1"].IsNull())
    {
        if (!value["MriT1"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Organ.MriT1` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mriT1.Deserialize(value["MriT1"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mriT1HasBeenSet = true;
    }

    if (value.HasMember("MriT2") && !value["MriT2"].IsNull())
    {
        if (!value["MriT2"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Organ.MriT2` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mriT2.Deserialize(value["MriT2"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mriT2HasBeenSet = true;
    }

    if (value.HasMember("CtHu") && !value["CtHu"].IsNull())
    {
        if (!value["CtHu"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Organ.CtHu` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ctHu.Deserialize(value["CtHu"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ctHuHasBeenSet = true;
    }

    if (value.HasMember("Suvmax") && !value["Suvmax"].IsNull())
    {
        if (!value["Suvmax"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Organ.Suvmax` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_suvmax.Deserialize(value["Suvmax"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_suvmaxHasBeenSet = true;
    }

    if (value.HasMember("Metabolism") && !value["Metabolism"].IsNull())
    {
        if (!value["Metabolism"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Organ.Metabolism` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_metabolism.Deserialize(value["Metabolism"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_metabolismHasBeenSet = true;
    }

    if (value.HasMember("RadioactiveUptake") && !value["RadioactiveUptake"].IsNull())
    {
        if (!value["RadioactiveUptake"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Organ.RadioactiveUptake` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_radioactiveUptake.Deserialize(value["RadioactiveUptake"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_radioactiveUptakeHasBeenSet = true;
    }

    if (value.HasMember("LymphEnlargement") && !value["LymphEnlargement"].IsNull())
    {
        if (!value["LymphEnlargement"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Organ.LymphEnlargement` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_lymphEnlargement.Deserialize(value["LymphEnlargement"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_lymphEnlargementHasBeenSet = true;
    }

    if (value.HasMember("ImageFeature") && !value["ImageFeature"].IsNull())
    {
        if (!value["ImageFeature"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Organ.ImageFeature` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imageFeature.Deserialize(value["ImageFeature"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageFeatureHasBeenSet = true;
    }

    if (value.HasMember("Duct") && !value["Duct"].IsNull())
    {
        if (!value["Duct"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Organ.Duct` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_duct.Deserialize(value["Duct"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ductHasBeenSet = true;
    }

    if (value.HasMember("Trend") && !value["Trend"].IsNull())
    {
        if (!value["Trend"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Organ.Trend` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_trend.Deserialize(value["Trend"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_trendHasBeenSet = true;
    }

    if (value.HasMember("Operation") && !value["Operation"].IsNull())
    {
        if (!value["Operation"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Organ.Operation` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_operation.Deserialize(value["Operation"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_operationHasBeenSet = true;
    }

    if (value.HasMember("Coords") && !value["Coords"].IsNull())
    {
        if (!value["Coords"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Organ.Coords` is not array type"));

        const rapidjson::Value &tmpValue = value["Coords"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Coord item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_coords.push_back(item);
        }
        m_coordsHasBeenSet = true;
    }

    if (value.HasMember("IsthmusThickness") && !value["IsthmusThickness"].IsNull())
    {
        if (!value["IsthmusThickness"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Organ.IsthmusThickness` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_isthmusThickness.Deserialize(value["IsthmusThickness"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_isthmusThicknessHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Organ::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_partHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Part";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_part.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_size.begin(); itr != m_size.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_envelopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Envelope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_envelope.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_edgeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Edge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_edge.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_innerEchoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InnerEcho";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_innerEcho.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_glandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gland";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_gland.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_shapeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Shape";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_shape.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_thicknessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Thickness";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_thickness.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_shapeAttrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShapeAttr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_shapeAttr.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cDFIHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CDFI";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cDFI.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_symDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SymDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_symDesc.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sizeStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SizeStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sizeStatus.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_outlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Outline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outline.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_structureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Structure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_structure.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_densityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Density";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_density.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_vasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vas.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cysticwallHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cysticwall";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cysticwall.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_capsuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Capsule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_capsule.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_isthmusThickneseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsthmusThicknese";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_isthmusThicknese.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_innerEchoDistributionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InnerEchoDistribution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_innerEchoDistribution.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_srcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Src";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_src.c_str(), allocator).Move(), allocator);
    }

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_index.begin(); itr != m_index.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_transparentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Transparent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_transparent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_mriAdcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MriAdc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mriAdc.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_mriDwiHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MriDwi";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mriDwi.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_mriT1HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MriT1";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mriT1.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_mriT2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MriT2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mriT2.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ctHuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CtHu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ctHu.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_suvmaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Suvmax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_suvmax.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_metabolismHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metabolism";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_metabolism.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_radioactiveUptakeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RadioactiveUptake";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_radioactiveUptake.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_lymphEnlargementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LymphEnlargement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_lymphEnlargement.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_imageFeatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageFeature";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageFeature.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ductHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duct";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_duct.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_trendHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Trend";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_trend.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_operationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operation.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_coordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Coords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_coords.begin(); itr != m_coords.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_isthmusThicknessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsthmusThickness";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_isthmusThickness.ToJsonObject(value[key.c_str()], allocator);
    }

}


Part Organ::GetPart() const
{
    return m_part;
}

void Organ::SetPart(const Part& _part)
{
    m_part = _part;
    m_partHasBeenSet = true;
}

bool Organ::PartHasBeenSet() const
{
    return m_partHasBeenSet;
}

vector<Size> Organ::GetSize() const
{
    return m_size;
}

void Organ::SetSize(const vector<Size>& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool Organ::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

BlockInfo Organ::GetEnvelope() const
{
    return m_envelope;
}

void Organ::SetEnvelope(const BlockInfo& _envelope)
{
    m_envelope = _envelope;
    m_envelopeHasBeenSet = true;
}

bool Organ::EnvelopeHasBeenSet() const
{
    return m_envelopeHasBeenSet;
}

BlockInfo Organ::GetEdge() const
{
    return m_edge;
}

void Organ::SetEdge(const BlockInfo& _edge)
{
    m_edge = _edge;
    m_edgeHasBeenSet = true;
}

bool Organ::EdgeHasBeenSet() const
{
    return m_edgeHasBeenSet;
}

BlockInfo Organ::GetInnerEcho() const
{
    return m_innerEcho;
}

void Organ::SetInnerEcho(const BlockInfo& _innerEcho)
{
    m_innerEcho = _innerEcho;
    m_innerEchoHasBeenSet = true;
}

bool Organ::InnerEchoHasBeenSet() const
{
    return m_innerEchoHasBeenSet;
}

BlockInfo Organ::GetGland() const
{
    return m_gland;
}

void Organ::SetGland(const BlockInfo& _gland)
{
    m_gland = _gland;
    m_glandHasBeenSet = true;
}

bool Organ::GlandHasBeenSet() const
{
    return m_glandHasBeenSet;
}

BlockInfo Organ::GetShape() const
{
    return m_shape;
}

void Organ::SetShape(const BlockInfo& _shape)
{
    m_shape = _shape;
    m_shapeHasBeenSet = true;
}

bool Organ::ShapeHasBeenSet() const
{
    return m_shapeHasBeenSet;
}

BlockInfo Organ::GetThickness() const
{
    return m_thickness;
}

void Organ::SetThickness(const BlockInfo& _thickness)
{
    m_thickness = _thickness;
    m_thicknessHasBeenSet = true;
}

bool Organ::ThicknessHasBeenSet() const
{
    return m_thicknessHasBeenSet;
}

BlockInfo Organ::GetShapeAttr() const
{
    return m_shapeAttr;
}

void Organ::SetShapeAttr(const BlockInfo& _shapeAttr)
{
    m_shapeAttr = _shapeAttr;
    m_shapeAttrHasBeenSet = true;
}

bool Organ::ShapeAttrHasBeenSet() const
{
    return m_shapeAttrHasBeenSet;
}

BlockInfo Organ::GetCDFI() const
{
    return m_cDFI;
}

void Organ::SetCDFI(const BlockInfo& _cDFI)
{
    m_cDFI = _cDFI;
    m_cDFIHasBeenSet = true;
}

bool Organ::CDFIHasBeenSet() const
{
    return m_cDFIHasBeenSet;
}

BlockInfo Organ::GetSymDesc() const
{
    return m_symDesc;
}

void Organ::SetSymDesc(const BlockInfo& _symDesc)
{
    m_symDesc = _symDesc;
    m_symDescHasBeenSet = true;
}

bool Organ::SymDescHasBeenSet() const
{
    return m_symDescHasBeenSet;
}

BlockInfo Organ::GetSizeStatus() const
{
    return m_sizeStatus;
}

void Organ::SetSizeStatus(const BlockInfo& _sizeStatus)
{
    m_sizeStatus = _sizeStatus;
    m_sizeStatusHasBeenSet = true;
}

bool Organ::SizeStatusHasBeenSet() const
{
    return m_sizeStatusHasBeenSet;
}

BlockInfo Organ::GetOutline() const
{
    return m_outline;
}

void Organ::SetOutline(const BlockInfo& _outline)
{
    m_outline = _outline;
    m_outlineHasBeenSet = true;
}

bool Organ::OutlineHasBeenSet() const
{
    return m_outlineHasBeenSet;
}

BlockInfo Organ::GetStructure() const
{
    return m_structure;
}

void Organ::SetStructure(const BlockInfo& _structure)
{
    m_structure = _structure;
    m_structureHasBeenSet = true;
}

bool Organ::StructureHasBeenSet() const
{
    return m_structureHasBeenSet;
}

BlockInfo Organ::GetDensity() const
{
    return m_density;
}

void Organ::SetDensity(const BlockInfo& _density)
{
    m_density = _density;
    m_densityHasBeenSet = true;
}

bool Organ::DensityHasBeenSet() const
{
    return m_densityHasBeenSet;
}

BlockInfo Organ::GetVas() const
{
    return m_vas;
}

void Organ::SetVas(const BlockInfo& _vas)
{
    m_vas = _vas;
    m_vasHasBeenSet = true;
}

bool Organ::VasHasBeenSet() const
{
    return m_vasHasBeenSet;
}

BlockInfo Organ::GetCysticwall() const
{
    return m_cysticwall;
}

void Organ::SetCysticwall(const BlockInfo& _cysticwall)
{
    m_cysticwall = _cysticwall;
    m_cysticwallHasBeenSet = true;
}

bool Organ::CysticwallHasBeenSet() const
{
    return m_cysticwallHasBeenSet;
}

BlockInfo Organ::GetCapsule() const
{
    return m_capsule;
}

void Organ::SetCapsule(const BlockInfo& _capsule)
{
    m_capsule = _capsule;
    m_capsuleHasBeenSet = true;
}

bool Organ::CapsuleHasBeenSet() const
{
    return m_capsuleHasBeenSet;
}

Size Organ::GetIsthmusThicknese() const
{
    return m_isthmusThicknese;
}

void Organ::SetIsthmusThicknese(const Size& _isthmusThicknese)
{
    m_isthmusThicknese = _isthmusThicknese;
    m_isthmusThickneseHasBeenSet = true;
}

bool Organ::IsthmusThickneseHasBeenSet() const
{
    return m_isthmusThickneseHasBeenSet;
}

BlockInfo Organ::GetInnerEchoDistribution() const
{
    return m_innerEchoDistribution;
}

void Organ::SetInnerEchoDistribution(const BlockInfo& _innerEchoDistribution)
{
    m_innerEchoDistribution = _innerEchoDistribution;
    m_innerEchoDistributionHasBeenSet = true;
}

bool Organ::InnerEchoDistributionHasBeenSet() const
{
    return m_innerEchoDistributionHasBeenSet;
}

string Organ::GetSrc() const
{
    return m_src;
}

void Organ::SetSrc(const string& _src)
{
    m_src = _src;
    m_srcHasBeenSet = true;
}

bool Organ::SrcHasBeenSet() const
{
    return m_srcHasBeenSet;
}

vector<int64_t> Organ::GetIndex() const
{
    return m_index;
}

void Organ::SetIndex(const vector<int64_t>& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool Organ::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

BlockInfo Organ::GetTransparent() const
{
    return m_transparent;
}

void Organ::SetTransparent(const BlockInfo& _transparent)
{
    m_transparent = _transparent;
    m_transparentHasBeenSet = true;
}

bool Organ::TransparentHasBeenSet() const
{
    return m_transparentHasBeenSet;
}

BlockInfo Organ::GetMriAdc() const
{
    return m_mriAdc;
}

void Organ::SetMriAdc(const BlockInfo& _mriAdc)
{
    m_mriAdc = _mriAdc;
    m_mriAdcHasBeenSet = true;
}

bool Organ::MriAdcHasBeenSet() const
{
    return m_mriAdcHasBeenSet;
}

BlockInfo Organ::GetMriDwi() const
{
    return m_mriDwi;
}

void Organ::SetMriDwi(const BlockInfo& _mriDwi)
{
    m_mriDwi = _mriDwi;
    m_mriDwiHasBeenSet = true;
}

bool Organ::MriDwiHasBeenSet() const
{
    return m_mriDwiHasBeenSet;
}

BlockInfo Organ::GetMriT1() const
{
    return m_mriT1;
}

void Organ::SetMriT1(const BlockInfo& _mriT1)
{
    m_mriT1 = _mriT1;
    m_mriT1HasBeenSet = true;
}

bool Organ::MriT1HasBeenSet() const
{
    return m_mriT1HasBeenSet;
}

BlockInfo Organ::GetMriT2() const
{
    return m_mriT2;
}

void Organ::SetMriT2(const BlockInfo& _mriT2)
{
    m_mriT2 = _mriT2;
    m_mriT2HasBeenSet = true;
}

bool Organ::MriT2HasBeenSet() const
{
    return m_mriT2HasBeenSet;
}

BlockInfo Organ::GetCtHu() const
{
    return m_ctHu;
}

void Organ::SetCtHu(const BlockInfo& _ctHu)
{
    m_ctHu = _ctHu;
    m_ctHuHasBeenSet = true;
}

bool Organ::CtHuHasBeenSet() const
{
    return m_ctHuHasBeenSet;
}

BlockInfo Organ::GetSuvmax() const
{
    return m_suvmax;
}

void Organ::SetSuvmax(const BlockInfo& _suvmax)
{
    m_suvmax = _suvmax;
    m_suvmaxHasBeenSet = true;
}

bool Organ::SuvmaxHasBeenSet() const
{
    return m_suvmaxHasBeenSet;
}

BlockInfo Organ::GetMetabolism() const
{
    return m_metabolism;
}

void Organ::SetMetabolism(const BlockInfo& _metabolism)
{
    m_metabolism = _metabolism;
    m_metabolismHasBeenSet = true;
}

bool Organ::MetabolismHasBeenSet() const
{
    return m_metabolismHasBeenSet;
}

BlockInfo Organ::GetRadioactiveUptake() const
{
    return m_radioactiveUptake;
}

void Organ::SetRadioactiveUptake(const BlockInfo& _radioactiveUptake)
{
    m_radioactiveUptake = _radioactiveUptake;
    m_radioactiveUptakeHasBeenSet = true;
}

bool Organ::RadioactiveUptakeHasBeenSet() const
{
    return m_radioactiveUptakeHasBeenSet;
}

BlockInfo Organ::GetLymphEnlargement() const
{
    return m_lymphEnlargement;
}

void Organ::SetLymphEnlargement(const BlockInfo& _lymphEnlargement)
{
    m_lymphEnlargement = _lymphEnlargement;
    m_lymphEnlargementHasBeenSet = true;
}

bool Organ::LymphEnlargementHasBeenSet() const
{
    return m_lymphEnlargementHasBeenSet;
}

BlockInfo Organ::GetImageFeature() const
{
    return m_imageFeature;
}

void Organ::SetImageFeature(const BlockInfo& _imageFeature)
{
    m_imageFeature = _imageFeature;
    m_imageFeatureHasBeenSet = true;
}

bool Organ::ImageFeatureHasBeenSet() const
{
    return m_imageFeatureHasBeenSet;
}

BlockInfo Organ::GetDuct() const
{
    return m_duct;
}

void Organ::SetDuct(const BlockInfo& _duct)
{
    m_duct = _duct;
    m_ductHasBeenSet = true;
}

bool Organ::DuctHasBeenSet() const
{
    return m_ductHasBeenSet;
}

BlockInfo Organ::GetTrend() const
{
    return m_trend;
}

void Organ::SetTrend(const BlockInfo& _trend)
{
    m_trend = _trend;
    m_trendHasBeenSet = true;
}

bool Organ::TrendHasBeenSet() const
{
    return m_trendHasBeenSet;
}

BlockInfo Organ::GetOperation() const
{
    return m_operation;
}

void Organ::SetOperation(const BlockInfo& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool Organ::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

vector<Coord> Organ::GetCoords() const
{
    return m_coords;
}

void Organ::SetCoords(const vector<Coord>& _coords)
{
    m_coords = _coords;
    m_coordsHasBeenSet = true;
}

bool Organ::CoordsHasBeenSet() const
{
    return m_coordsHasBeenSet;
}

Size Organ::GetIsthmusThickness() const
{
    return m_isthmusThickness;
}

void Organ::SetIsthmusThickness(const Size& _isthmusThickness)
{
    m_isthmusThickness = _isthmusThickness;
    m_isthmusThicknessHasBeenSet = true;
}

bool Organ::IsthmusThicknessHasBeenSet() const
{
    return m_isthmusThicknessHasBeenSet;
}

