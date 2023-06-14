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

#ifndef TENCENTCLOUD_IRP_V20220805_MODEL_RECGOODSDATA_H_
#define TENCENTCLOUD_IRP_V20220805_MODEL_RECGOODSDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Irp
    {
        namespace V20220805
        {
            namespace Model
            {
                /**
                * 推荐返回的内容信息
                */
                class RecGoodsData : public AbstractModel
                {
                public:
                    RecGoodsData();
                    ~RecGoodsData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取推荐返回的商品ID
                     * @return GoodsId 推荐返回的商品ID
                     * 
                     */
                    std::string GetGoodsId() const;

                    /**
                     * 设置推荐返回的商品ID
                     * @param _goodsId 推荐返回的商品ID
                     * 
                     */
                    void SetGoodsId(const std::string& _goodsId);

                    /**
                     * 判断参数 GoodsId 是否已赋值
                     * @return GoodsId 是否已赋值
                     * 
                     */
                    bool GoodsIdHasBeenSet() const;

                    /**
                     * 获取推荐结果分，取值范围[0,1000000]
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Score 推荐结果分，取值范围[0,1000000]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetScore() const;

                    /**
                     * 设置推荐结果分，取值范围[0,1000000]
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _score 推荐结果分，取值范围[0,1000000]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScore(const double& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取推荐追踪id，本次推荐内容产生的后续行为上报均要用该GoodsTraceId上报。每次接口调用返回的GoodsTraceId不同
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GoodsTraceId 推荐追踪id，本次推荐内容产生的后续行为上报均要用该GoodsTraceId上报。每次接口调用返回的GoodsTraceId不同
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGoodsTraceId() const;

                    /**
                     * 设置推荐追踪id，本次推荐内容产生的后续行为上报均要用该GoodsTraceId上报。每次接口调用返回的GoodsTraceId不同
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _goodsTraceId 推荐追踪id，本次推荐内容产生的后续行为上报均要用该GoodsTraceId上报。每次接口调用返回的GoodsTraceId不同
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGoodsTraceId(const std::string& _goodsTraceId);

                    /**
                     * 判断参数 GoodsTraceId 是否已赋值
                     * @return GoodsTraceId 是否已赋值
                     * 
                     */
                    bool GoodsTraceIdHasBeenSet() const;

                    /**
                     * 获取商品所在位置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Position 商品所在位置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPosition() const;

                    /**
                     * 设置商品所在位置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _position 商品所在位置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPosition(const int64_t& _position);

                    /**
                     * 判断参数 Position 是否已赋值
                     * @return Position 是否已赋值
                     * 
                     */
                    bool PositionHasBeenSet() const;

                private:

                    /**
                     * 推荐返回的商品ID
                     */
                    std::string m_goodsId;
                    bool m_goodsIdHasBeenSet;

                    /**
                     * 推荐结果分，取值范围[0,1000000]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 推荐追踪id，本次推荐内容产生的后续行为上报均要用该GoodsTraceId上报。每次接口调用返回的GoodsTraceId不同
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_goodsTraceId;
                    bool m_goodsTraceIdHasBeenSet;

                    /**
                     * 商品所在位置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_position;
                    bool m_positionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IRP_V20220805_MODEL_RECGOODSDATA_H_
