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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_LAYERVERSIONINFO_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_LAYERVERSIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 层版本信息
                */
                class LayerVersionInfo : public AbstractModel
                {
                public:
                    LayerVersionInfo();
                    ~LayerVersionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取版本适用的运行时
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CompatibleRuntimes 版本适用的运行时
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetCompatibleRuntimes() const;

                    /**
                     * 设置版本适用的运行时
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CompatibleRuntimes 版本适用的运行时
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCompatibleRuntimes(const std::vector<std::string>& _compatibleRuntimes);

                    /**
                     * 判断参数 CompatibleRuntimes 是否已赋值
                     * @return CompatibleRuntimes 是否已赋值
                     */
                    bool CompatibleRuntimesHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return AddTime 创建时间
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置创建时间
                     * @param AddTime 创建时间
                     */
                    void SetAddTime(const std::string& _addTime);

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取版本描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 版本描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置版本描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Description 版本描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取许可证信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LicenseInfo 许可证信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLicenseInfo() const;

                    /**
                     * 设置许可证信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LicenseInfo 许可证信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLicenseInfo(const std::string& _licenseInfo);

                    /**
                     * 判断参数 LicenseInfo 是否已赋值
                     * @return LicenseInfo 是否已赋值
                     */
                    bool LicenseInfoHasBeenSet() const;

                    /**
                     * 获取版本号
                     * @return LayerVersion 版本号
                     */
                    int64_t GetLayerVersion() const;

                    /**
                     * 设置版本号
                     * @param LayerVersion 版本号
                     */
                    void SetLayerVersion(const int64_t& _layerVersion);

                    /**
                     * 判断参数 LayerVersion 是否已赋值
                     * @return LayerVersion 是否已赋值
                     */
                    bool LayerVersionHasBeenSet() const;

                    /**
                     * 获取层名称
                     * @return LayerName 层名称
                     */
                    std::string GetLayerName() const;

                    /**
                     * 设置层名称
                     * @param LayerName 层名称
                     */
                    void SetLayerName(const std::string& _layerName);

                    /**
                     * 判断参数 LayerName 是否已赋值
                     * @return LayerName 是否已赋值
                     */
                    bool LayerNameHasBeenSet() const;

                    /**
                     * 获取层的具体版本当前状态，可能取值：
Active 正常
Publishing  发布中
PublishFailed  发布失败
Deleted 已删除
                     * @return Status 层的具体版本当前状态，可能取值：
Active 正常
Publishing  发布中
PublishFailed  发布失败
Deleted 已删除
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置层的具体版本当前状态，可能取值：
Active 正常
Publishing  发布中
PublishFailed  发布失败
Deleted 已删除
                     * @param Status 层的具体版本当前状态，可能取值：
Active 正常
Publishing  发布中
PublishFailed  发布失败
Deleted 已删除
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 版本适用的运行时
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_compatibleRuntimes;
                    bool m_compatibleRuntimesHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * 版本描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 许可证信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_licenseInfo;
                    bool m_licenseInfoHasBeenSet;

                    /**
                     * 版本号
                     */
                    int64_t m_layerVersion;
                    bool m_layerVersionHasBeenSet;

                    /**
                     * 层名称
                     */
                    std::string m_layerName;
                    bool m_layerNameHasBeenSet;

                    /**
                     * 层的具体版本当前状态，可能取值：
Active 正常
Publishing  发布中
PublishFailed  发布失败
Deleted 已删除
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_LAYERVERSIONINFO_H_
