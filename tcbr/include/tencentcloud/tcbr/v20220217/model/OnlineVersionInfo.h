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

#ifndef TENCENTCLOUD_TCBR_V20220217_MODEL_ONLINEVERSIONINFO_H_
#define TENCENTCLOUD_TCBR_V20220217_MODEL_ONLINEVERSIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcbr
    {
        namespace V20220217
        {
            namespace Model
            {
                /**
                * 在线版本信息
                */
                class OnlineVersionInfo : public AbstractModel
                {
                public:
                    OnlineVersionInfo();
                    ~OnlineVersionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取版本名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VersionName 版本名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置版本名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VersionName 版本名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVersionName(const std::string& _versionName);

                    /**
                     * 判断参数 VersionName 是否已赋值
                     * @return VersionName 是否已赋值
                     */
                    bool VersionNameHasBeenSet() const;

                    /**
                     * 获取镜像url
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageUrl 镜像url
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置镜像url
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ImageUrl 镜像url
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     */
                    bool ImageUrlHasBeenSet() const;

                    /**
                     * 获取流量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FlowRatio 流量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFlowRatio() const;

                    /**
                     * 设置流量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FlowRatio 流量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFlowRatio(const std::string& _flowRatio);

                    /**
                     * 判断参数 FlowRatio 是否已赋值
                     * @return FlowRatio 是否已赋值
                     */
                    bool FlowRatioHasBeenSet() const;

                private:

                    /**
                     * 版本名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * 镜像url
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * 流量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_flowRatio;
                    bool m_flowRatioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCBR_V20220217_MODEL_ONLINEVERSIONINFO_H_
