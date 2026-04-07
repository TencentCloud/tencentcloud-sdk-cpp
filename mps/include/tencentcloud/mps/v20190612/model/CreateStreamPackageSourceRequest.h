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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATESTREAMPACKAGESOURCEREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATESTREAMPACKAGESOURCEREQUEST_H_

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
                * CreateStreamPackageSource请求参数结构体
                */
                class CreateStreamPackageSourceRequest : public AbstractModel
                {
                public:
                    CreateStreamPackageSourceRequest();
                    ~CreateStreamPackageSourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取该source所属的location id，必填且唯一绑定一个location。
                     * @return AttachedLocation 该source所属的location id，必填且唯一绑定一个location。
                     * 
                     */
                    std::string GetAttachedLocation() const;

                    /**
                     * 设置该source所属的location id，必填且唯一绑定一个location。
                     * @param _attachedLocation 该source所属的location id，必填且唯一绑定一个location。
                     * 
                     */
                    void SetAttachedLocation(const std::string& _attachedLocation);

                    /**
                     * 判断参数 AttachedLocation 是否已赋值
                     * @return AttachedLocation 是否已赋值
                     * 
                     */
                    bool AttachedLocationHasBeenSet() const;

                    /**
                     * 获取Source名称，在location下面全局唯一。
                     * @return Name Source名称，在location下面全局唯一。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Source名称，在location下面全局唯一。
                     * @param _name Source名称，在location下面全局唯一。
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
                     * 获取区分直播Live和点播VOD source类型，可选值：Live、VOD。
                     * @return Type 区分直播Live和点播VOD source类型，可选值：Live、VOD。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置区分直播Live和点播VOD source类型，可选值：Live、VOD。
                     * @param _type 区分直播Live和点播VOD source类型，可选值：Live、VOD。
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
                     * 获取source具体配置。
                     * @return PackageConfs source具体配置。
                     * 
                     */
                    std::vector<SourcePackageConf> GetPackageConfs() const;

                    /**
                     * 设置source具体配置。
                     * @param _packageConfs source具体配置。
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
                     * 获取sourcetag标签，ADS可以根据Source Tag信息，返回更精准的广告
                     * @return SourceTags sourcetag标签，ADS可以根据Source Tag信息，返回更精准的广告
                     * 
                     */
                    std::vector<SourceTag> GetSourceTags() const;

                    /**
                     * 设置sourcetag标签，ADS可以根据Source Tag信息，返回更精准的广告
                     * @param _sourceTags sourcetag标签，ADS可以根据Source Tag信息，返回更精准的广告
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
                     * 该source所属的location id，必填且唯一绑定一个location。
                     */
                    std::string m_attachedLocation;
                    bool m_attachedLocationHasBeenSet;

                    /**
                     * Source名称，在location下面全局唯一。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 区分直播Live和点播VOD source类型，可选值：Live、VOD。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * source具体配置。
                     */
                    std::vector<SourcePackageConf> m_packageConfs;
                    bool m_packageConfsHasBeenSet;

                    /**
                     * sourcetag标签，ADS可以根据Source Tag信息，返回更精准的广告
                     */
                    std::vector<SourceTag> m_sourceTags;
                    bool m_sourceTagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATESTREAMPACKAGESOURCEREQUEST_H_
