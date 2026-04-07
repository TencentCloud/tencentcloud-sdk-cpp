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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYSTREAMPACKAGESOURCEREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYSTREAMPACKAGESOURCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/SourcePackageConf.h>
#include <tencentcloud/mps/v20190612/model/SourceTag.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * ModifyStreamPackageSource请求参数结构体
                */
                class ModifyStreamPackageSourceRequest : public AbstractModel
                {
                public:
                    ModifyStreamPackageSourceRequest();
                    ~ModifyStreamPackageSourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Source Id。
                     * @return Id Source Id。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Source Id。
                     * @param _id Source Id。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取修改后的名称。
                     * @return Name 修改后的名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置修改后的名称。
                     * @param _name 修改后的名称。
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
                     * 获取区分直播Live和点播VOD source类型。	
                     * @return Type 区分直播Live和点播VOD source类型。	
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置区分直播Live和点播VOD source类型。	
                     * @param _type 区分直播Live和点播VOD source类型。	
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
                     * 获取source配置。	
                     * @return PackageConfs source配置。	
                     * 
                     */
                    std::vector<SourcePackageConf> GetPackageConfs() const;

                    /**
                     * 设置source配置。	
                     * @param _packageConfs source配置。	
                     * 
                     */
                    void SetPackageConfs(const std::vector<SourcePackageConf>& _packageConfs);

                    /**
                     * 判断参数 PackageConfs 是否已赋值
                     * @return PackageConfs 是否已赋值
                     * 
                     */
                    bool PackageConfsHasBeenSet() const;

                    /**
                     * 获取ADS可以根据Source Tag信息，返回更精准的广告。
                     * @return SourceTags ADS可以根据Source Tag信息，返回更精准的广告。
                     * 
                     */
                    std::vector<SourceTag> GetSourceTags() const;

                    /**
                     * 设置ADS可以根据Source Tag信息，返回更精准的广告。
                     * @param _sourceTags ADS可以根据Source Tag信息，返回更精准的广告。
                     * 
                     */
                    void SetSourceTags(const std::vector<SourceTag>& _sourceTags);

                    /**
                     * 判断参数 SourceTags 是否已赋值
                     * @return SourceTags 是否已赋值
                     * 
                     */
                    bool SourceTagsHasBeenSet() const;

                private:

                    /**
                     * Source Id。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 修改后的名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 区分直播Live和点播VOD source类型。	
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * source配置。	
                     */
                    std::vector<SourcePackageConf> m_packageConfs;
                    bool m_packageConfsHasBeenSet;

                    /**
                     * ADS可以根据Source Tag信息，返回更精准的广告。
                     */
                    std::vector<SourceTag> m_sourceTags;
                    bool m_sourceTagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYSTREAMPACKAGESOURCEREQUEST_H_
