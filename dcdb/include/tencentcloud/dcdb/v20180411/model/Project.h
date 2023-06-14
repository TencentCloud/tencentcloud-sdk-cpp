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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_PROJECT_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_PROJECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * 项目信息描述
                */
                class Project : public AbstractModel
                {
                public:
                    Project();
                    ~Project() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取资源拥有者（主账号）uin
                     * @return OwnerUin 资源拥有者（主账号）uin
                     * 
                     */
                    int64_t GetOwnerUin() const;

                    /**
                     * 设置资源拥有者（主账号）uin
                     * @param _ownerUin 资源拥有者（主账号）uin
                     * 
                     */
                    void SetOwnerUin(const int64_t& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取应用Id
                     * @return AppId 应用Id
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置应用Id
                     * @param _appId 应用Id
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取项目名称
                     * @return Name 项目名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置项目名称
                     * @param _name 项目名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取创建者uin
                     * @return CreatorUin 创建者uin
                     * 
                     */
                    int64_t GetCreatorUin() const;

                    /**
                     * 设置创建者uin
                     * @param _creatorUin 创建者uin
                     * 
                     */
                    void SetCreatorUin(const int64_t& _creatorUin);

                    /**
                     * 判断参数 CreatorUin 是否已赋值
                     * @return CreatorUin 是否已赋值
                     * 
                     */
                    bool CreatorUinHasBeenSet() const;

                    /**
                     * 获取来源平台
                     * @return SrcPlat 来源平台
                     * 
                     */
                    std::string GetSrcPlat() const;

                    /**
                     * 设置来源平台
                     * @param _srcPlat 来源平台
                     * 
                     */
                    void SetSrcPlat(const std::string& _srcPlat);

                    /**
                     * 判断参数 SrcPlat 是否已赋值
                     * @return SrcPlat 是否已赋值
                     * 
                     */
                    bool SrcPlatHasBeenSet() const;

                    /**
                     * 获取来源AppId
                     * @return SrcAppId 来源AppId
                     * 
                     */
                    int64_t GetSrcAppId() const;

                    /**
                     * 设置来源AppId
                     * @param _srcAppId 来源AppId
                     * 
                     */
                    void SetSrcAppId(const int64_t& _srcAppId);

                    /**
                     * 判断参数 SrcAppId 是否已赋值
                     * @return SrcAppId 是否已赋值
                     * 
                     */
                    bool SrcAppIdHasBeenSet() const;

                    /**
                     * 获取项目状态,0正常，-1关闭。默认项目为3
                     * @return Status 项目状态,0正常，-1关闭。默认项目为3
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置项目状态,0正常，-1关闭。默认项目为3
                     * @param _status 项目状态,0正常，-1关闭。默认项目为3
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
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取是否默认项目，1 是，0 不是
                     * @return IsDefault 是否默认项目，1 是，0 不是
                     * 
                     */
                    int64_t GetIsDefault() const;

                    /**
                     * 设置是否默认项目，1 是，0 不是
                     * @param _isDefault 是否默认项目，1 是，0 不是
                     * 
                     */
                    void SetIsDefault(const int64_t& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取描述信息
                     * @return Info 描述信息
                     * 
                     */
                    std::string GetInfo() const;

                    /**
                     * 设置描述信息
                     * @param _info 描述信息
                     * 
                     */
                    void SetInfo(const std::string& _info);

                    /**
                     * 判断参数 Info 是否已赋值
                     * @return Info 是否已赋值
                     * 
                     */
                    bool InfoHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 资源拥有者（主账号）uin
                     */
                    int64_t m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 应用Id
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 项目名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 创建者uin
                     */
                    int64_t m_creatorUin;
                    bool m_creatorUinHasBeenSet;

                    /**
                     * 来源平台
                     */
                    std::string m_srcPlat;
                    bool m_srcPlatHasBeenSet;

                    /**
                     * 来源AppId
                     */
                    int64_t m_srcAppId;
                    bool m_srcAppIdHasBeenSet;

                    /**
                     * 项目状态,0正常，-1关闭。默认项目为3
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 是否默认项目，1 是，0 不是
                     */
                    int64_t m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * 描述信息
                     */
                    std::string m_info;
                    bool m_infoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_PROJECT_H_
