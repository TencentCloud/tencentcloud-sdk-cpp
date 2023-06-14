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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DELETEIMAGETAGSREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DELETEIMAGETAGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/DeleteImageTag.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DeleteImageTags请求参数结构体
                */
                class DeleteImageTagsRequest : public AbstractModel
                {
                public:
                    DeleteImageTagsRequest();
                    ~DeleteImageTagsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取镜像版本数组
                     * @return ImageTags 镜像版本数组
                     * 
                     */
                    std::vector<DeleteImageTag> GetImageTags() const;

                    /**
                     * 设置镜像版本数组
                     * @param _imageTags 镜像版本数组
                     * 
                     */
                    void SetImageTags(const std::vector<DeleteImageTag>& _imageTags);

                    /**
                     * 判断参数 ImageTags 是否已赋值
                     * @return ImageTags 是否已赋值
                     * 
                     */
                    bool ImageTagsHasBeenSet() const;

                    /**
                     * 获取企业: tcr ；个人: personal或者不填
                     * @return RepoType 企业: tcr ；个人: personal或者不填
                     * 
                     */
                    std::string GetRepoType() const;

                    /**
                     * 设置企业: tcr ；个人: personal或者不填
                     * @param _repoType 企业: tcr ；个人: personal或者不填
                     * 
                     */
                    void SetRepoType(const std::string& _repoType);

                    /**
                     * 判断参数 RepoType 是否已赋值
                     * @return RepoType 是否已赋值
                     * 
                     */
                    bool RepoTypeHasBeenSet() const;

                private:

                    /**
                     * 镜像版本数组
                     */
                    std::vector<DeleteImageTag> m_imageTags;
                    bool m_imageTagsHasBeenSet;

                    /**
                     * 企业: tcr ；个人: personal或者不填
                     */
                    std::string m_repoType;
                    bool m_repoTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DELETEIMAGETAGSREQUEST_H_
