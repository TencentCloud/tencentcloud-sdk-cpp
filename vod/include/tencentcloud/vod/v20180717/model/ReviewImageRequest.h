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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWIMAGEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWIMAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * ReviewImage请求参数结构体
                */
                class ReviewImageRequest : public AbstractModel
                {
                public:
                    ReviewImageRequest();
                    ~ReviewImageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取媒体文件 ID，即该文件在云点播上的全局唯一标识符。本接口要求媒体文件必须是图片格式。
                     * @return FileId 媒体文件 ID，即该文件在云点播上的全局唯一标识符。本接口要求媒体文件必须是图片格式。
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置媒体文件 ID，即该文件在云点播上的全局唯一标识符。本接口要求媒体文件必须是图片格式。
                     * @param _fileId 媒体文件 ID，即该文件在云点播上的全局唯一标识符。本接口要求媒体文件必须是图片格式。
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取图片审核模板 ID，取值范围：
<li>10：预置模板，支持检测的违规标签包括色情（Porn）、暴力（Terror）和不适宜的信息（Polity）。</li>
                     * @return Definition 图片审核模板 ID，取值范围：
<li>10：预置模板，支持检测的违规标签包括色情（Porn）、暴力（Terror）和不适宜的信息（Polity）。</li>
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置图片审核模板 ID，取值范围：
<li>10：预置模板，支持检测的违规标签包括色情（Porn）、暴力（Terror）和不适宜的信息（Polity）。</li>
                     * @param _definition 图片审核模板 ID，取值范围：
<li>10：预置模板，支持检测的违规标签包括色情（Porn）、暴力（Terror）和不适宜的信息（Polity）。</li>
                     * 
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取<b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * @return SubAppId <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * @param _subAppId <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                private:

                    /**
                     * 媒体文件 ID，即该文件在云点播上的全局唯一标识符。本接口要求媒体文件必须是图片格式。
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 图片审核模板 ID，取值范围：
<li>10：预置模板，支持检测的违规标签包括色情（Porn）、暴力（Terror）和不适宜的信息（Polity）。</li>
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWIMAGEREQUEST_H_
