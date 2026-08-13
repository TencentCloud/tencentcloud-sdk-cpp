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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_IMAGEDTO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_IMAGEDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 镜像响应类
                */
                class ImageDto : public AbstractModel
                {
                public:
                    ImageDto();
                    ~ImageDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>镜像ID</p>
                     * @return Id <p>镜像ID</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>镜像ID</p>
                     * @param _id <p>镜像ID</p>
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>镜像名称</p>
                     * @return Name <p>镜像名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>镜像名称</p>
                     * @param _name <p>镜像名称</p>
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
                     * 获取<p>镜像地址</p>
                     * @return Url <p>镜像地址</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>镜像地址</p>
                     * @param _url <p>镜像地址</p>
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取<p>镜像描述</p>
                     * @return Description <p>镜像描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>镜像描述</p>
                     * @param _description <p>镜像描述</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>镜像类型（Ray/Workspace）</p>
                     * @return Type <p>镜像类型（Ray/Workspace）</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>镜像类型（Ray/Workspace）</p>
                     * @param _type <p>镜像类型（Ray/Workspace）</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>镜像内置的 Ray 版本号</p>
                     * @return RayVersion <p>镜像内置的 Ray 版本号</p>
                     * 
                     */
                    std::string GetRayVersion() const;

                    /**
                     * 设置<p>镜像内置的 Ray 版本号</p>
                     * @param _rayVersion <p>镜像内置的 Ray 版本号</p>
                     * 
                     */
                    void SetRayVersion(const std::string& _rayVersion);

                    /**
                     * 判断参数 RayVersion 是否已赋值
                     * @return RayVersion 是否已赋值
                     * 
                     */
                    bool RayVersionHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>更新时间</p>
                     * @return UpdateTime <p>更新时间</p>
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p>
                     * @param _updateTime <p>更新时间</p>
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>镜像ID</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>镜像名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>镜像地址</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>镜像描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>镜像类型（Ray/Workspace）</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>镜像内置的 Ray 版本号</p>
                     */
                    std::string m_rayVersion;
                    bool m_rayVersionHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_IMAGEDTO_H_
