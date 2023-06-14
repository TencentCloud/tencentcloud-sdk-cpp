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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_ALERTDETAIL_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_ALERTDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssa/v20180608/model/AlertType.h>


namespace TencentCloud
{
    namespace Ssa
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 告警详情
                */
                class AlertDetail : public AbstractModel
                {
                public:
                    AlertDetail();
                    ~AlertDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取告警基础信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BaseInfo 告警基础信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AlertType GetBaseInfo() const;

                    /**
                     * 设置告警基础信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _baseInfo 告警基础信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBaseInfo(const AlertType& _baseInfo);

                    /**
                     * 判断参数 BaseInfo 是否已赋值
                     * @return BaseInfo 是否已赋值
                     * 
                     */
                    bool BaseInfoHasBeenSet() const;

                    /**
                     * 获取告警详情，json序列化
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Detail 告警详情，json序列化
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDetail() const;

                    /**
                     * 设置告警详情，json序列化
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _detail 告警详情，json序列化
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDetail(const std::string& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                private:

                    /**
                     * 告警基础信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AlertType m_baseInfo;
                    bool m_baseInfoHasBeenSet;

                    /**
                     * 告警详情，json序列化
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_detail;
                    bool m_detailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_ALERTDETAIL_H_
