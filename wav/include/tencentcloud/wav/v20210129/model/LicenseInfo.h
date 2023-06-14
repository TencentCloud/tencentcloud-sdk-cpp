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

#ifndef TENCENTCLOUD_WAV_V20210129_MODEL_LICENSEINFO_H_
#define TENCENTCLOUD_WAV_V20210129_MODEL_LICENSEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wav
    {
        namespace V20210129
        {
            namespace Model
            {
                /**
                * license相关信息
                */
                class LicenseInfo : public AbstractModel
                {
                public:
                    LicenseInfo();
                    ~LicenseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取license编号
                     * @return License license编号
                     * 
                     */
                    std::string GetLicense() const;

                    /**
                     * 设置license编号
                     * @param _license license编号
                     * 
                     */
                    void SetLicense(const std::string& _license);

                    /**
                     * 判断参数 License 是否已赋值
                     * @return License 是否已赋值
                     * 
                     */
                    bool LicenseHasBeenSet() const;

                    /**
                     * 获取license版本；1-基础版，2-标准版，3-增值版
                     * @return LicenseEdition license版本；1-基础版，2-标准版，3-增值版
                     * 
                     */
                    int64_t GetLicenseEdition() const;

                    /**
                     * 设置license版本；1-基础版，2-标准版，3-增值版
                     * @param _licenseEdition license版本；1-基础版，2-标准版，3-增值版
                     * 
                     */
                    void SetLicenseEdition(const int64_t& _licenseEdition);

                    /**
                     * 判断参数 LicenseEdition 是否已赋值
                     * @return LicenseEdition 是否已赋值
                     * 
                     */
                    bool LicenseEditionHasBeenSet() const;

                    /**
                     * 获取生效开始时间, 格式yyyy-MM-dd HH:mm:ss
                     * @return ResourceStartTime 生效开始时间, 格式yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetResourceStartTime() const;

                    /**
                     * 设置生效开始时间, 格式yyyy-MM-dd HH:mm:ss
                     * @param _resourceStartTime 生效开始时间, 格式yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    void SetResourceStartTime(const std::string& _resourceStartTime);

                    /**
                     * 判断参数 ResourceStartTime 是否已赋值
                     * @return ResourceStartTime 是否已赋值
                     * 
                     */
                    bool ResourceStartTimeHasBeenSet() const;

                    /**
                     * 获取生效结束时间, 格式yyyy-MM-dd HH:mm:ss
                     * @return ResourceEndTime 生效结束时间, 格式yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetResourceEndTime() const;

                    /**
                     * 设置生效结束时间, 格式yyyy-MM-dd HH:mm:ss
                     * @param _resourceEndTime 生效结束时间, 格式yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    void SetResourceEndTime(const std::string& _resourceEndTime);

                    /**
                     * 判断参数 ResourceEndTime 是否已赋值
                     * @return ResourceEndTime 是否已赋值
                     * 
                     */
                    bool ResourceEndTimeHasBeenSet() const;

                    /**
                     * 获取隔离截止时间, 格式yyyy-MM-dd HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsolationDeadline 隔离截止时间, 格式yyyy-MM-dd HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIsolationDeadline() const;

                    /**
                     * 设置隔离截止时间, 格式yyyy-MM-dd HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isolationDeadline 隔离截止时间, 格式yyyy-MM-dd HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsolationDeadline(const std::string& _isolationDeadline);

                    /**
                     * 判断参数 IsolationDeadline 是否已赋值
                     * @return IsolationDeadline 是否已赋值
                     * 
                     */
                    bool IsolationDeadlineHasBeenSet() const;

                    /**
                     * 获取资源计划销毁时间, 格式yyyy-MM-dd HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DestroyTime 资源计划销毁时间, 格式yyyy-MM-dd HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDestroyTime() const;

                    /**
                     * 设置资源计划销毁时间, 格式yyyy-MM-dd HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _destroyTime 资源计划销毁时间, 格式yyyy-MM-dd HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDestroyTime(const std::string& _destroyTime);

                    /**
                     * 判断参数 DestroyTime 是否已赋值
                     * @return DestroyTime 是否已赋值
                     * 
                     */
                    bool DestroyTimeHasBeenSet() const;

                    /**
                     * 获取资源状态，1.正常，2.隔离，3.销毁
                     * @return Status 资源状态，1.正常，2.隔离，3.销毁
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置资源状态，1.正常，2.隔离，3.销毁
                     * @param _status 资源状态，1.正常，2.隔离，3.销毁
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Extra 扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExtra() const;

                    /**
                     * 设置扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extra 扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExtra(const std::string& _extra);

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     * 
                     */
                    bool ExtraHasBeenSet() const;

                private:

                    /**
                     * license编号
                     */
                    std::string m_license;
                    bool m_licenseHasBeenSet;

                    /**
                     * license版本；1-基础版，2-标准版，3-增值版
                     */
                    int64_t m_licenseEdition;
                    bool m_licenseEditionHasBeenSet;

                    /**
                     * 生效开始时间, 格式yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_resourceStartTime;
                    bool m_resourceStartTimeHasBeenSet;

                    /**
                     * 生效结束时间, 格式yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_resourceEndTime;
                    bool m_resourceEndTimeHasBeenSet;

                    /**
                     * 隔离截止时间, 格式yyyy-MM-dd HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_isolationDeadline;
                    bool m_isolationDeadlineHasBeenSet;

                    /**
                     * 资源计划销毁时间, 格式yyyy-MM-dd HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_destroyTime;
                    bool m_destroyTimeHasBeenSet;

                    /**
                     * 资源状态，1.正常，2.隔离，3.销毁
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAV_V20210129_MODEL_LICENSEINFO_H_
