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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_AUTHINFO_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_AUTHINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ame
    {
        namespace V20190916
        {
            namespace Model
            {
                /**
                * AuthInfo集合
                */
                class AuthInfo : public AbstractModel
                {
                public:
                    AuthInfo();
                    ~AuthInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主体名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubjectName 主体名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubjectName() const;

                    /**
                     * 设置主体名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subjectName 主体名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubjectName(const std::string& _subjectName);

                    /**
                     * 判断参数 SubjectName 是否已赋值
                     * @return SubjectName 是否已赋值
                     * 
                     */
                    bool SubjectNameHasBeenSet() const;

                    /**
                     * 获取项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectName 项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectName 项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取应用场景
                     * @return AppScene 应用场景
                     * 
                     */
                    int64_t GetAppScene() const;

                    /**
                     * 设置应用场景
                     * @param _appScene 应用场景
                     * 
                     */
                    void SetAppScene(const int64_t& _appScene);

                    /**
                     * 判断参数 AppScene 是否已赋值
                     * @return AppScene 是否已赋值
                     * 
                     */
                    bool AppSceneHasBeenSet() const;

                    /**
                     * 获取应用地域
                     * @return AppRegion 应用地域
                     * 
                     */
                    int64_t GetAppRegion() const;

                    /**
                     * 设置应用地域
                     * @param _appRegion 应用地域
                     * 
                     */
                    void SetAppRegion(const int64_t& _appRegion);

                    /**
                     * 判断参数 AppRegion 是否已赋值
                     * @return AppRegion 是否已赋值
                     * 
                     */
                    bool AppRegionHasBeenSet() const;

                    /**
                     * 获取授权时间
                     * @return AuthPeriod 授权时间
                     * 
                     */
                    int64_t GetAuthPeriod() const;

                    /**
                     * 设置授权时间
                     * @param _authPeriod 授权时间
                     * 
                     */
                    void SetAuthPeriod(const int64_t& _authPeriod);

                    /**
                     * 判断参数 AuthPeriod 是否已赋值
                     * @return AuthPeriod 是否已赋值
                     * 
                     */
                    bool AuthPeriodHasBeenSet() const;

                    /**
                     * 获取是否可商业化
                     * @return Commercialization 是否可商业化
                     * 
                     */
                    int64_t GetCommercialization() const;

                    /**
                     * 设置是否可商业化
                     * @param _commercialization 是否可商业化
                     * 
                     */
                    void SetCommercialization(const int64_t& _commercialization);

                    /**
                     * 判断参数 Commercialization 是否已赋值
                     * @return Commercialization 是否已赋值
                     * 
                     */
                    bool CommercializationHasBeenSet() const;

                    /**
                     * 获取是否可跨平台
                     * @return Platform 是否可跨平台
                     * 
                     */
                    int64_t GetPlatform() const;

                    /**
                     * 设置是否可跨平台
                     * @param _platform 是否可跨平台
                     * 
                     */
                    void SetPlatform(const int64_t& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取加密后Id
                     * @return Id 加密后Id
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置加密后Id
                     * @param _id 加密后Id
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * 主体名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subjectName;
                    bool m_subjectNameHasBeenSet;

                    /**
                     * 项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 应用场景
                     */
                    int64_t m_appScene;
                    bool m_appSceneHasBeenSet;

                    /**
                     * 应用地域
                     */
                    int64_t m_appRegion;
                    bool m_appRegionHasBeenSet;

                    /**
                     * 授权时间
                     */
                    int64_t m_authPeriod;
                    bool m_authPeriodHasBeenSet;

                    /**
                     * 是否可商业化
                     */
                    int64_t m_commercialization;
                    bool m_commercializationHasBeenSet;

                    /**
                     * 是否可跨平台
                     */
                    int64_t m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 加密后Id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_AUTHINFO_H_
