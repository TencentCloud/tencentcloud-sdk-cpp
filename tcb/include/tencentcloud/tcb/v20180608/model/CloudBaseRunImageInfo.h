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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDBASERUNIMAGEINFO_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDBASERUNIMAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * CloudBaseRun 镜像信息
                */
                class CloudBaseRunImageInfo : public AbstractModel
                {
                public:
                    CloudBaseRunImageInfo();
                    ~CloudBaseRunImageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取镜像仓库名称
                     * @return RepositoryName 镜像仓库名称
                     * 
                     */
                    std::string GetRepositoryName() const;

                    /**
                     * 设置镜像仓库名称
                     * @param _repositoryName 镜像仓库名称
                     * 
                     */
                    void SetRepositoryName(const std::string& _repositoryName);

                    /**
                     * 判断参数 RepositoryName 是否已赋值
                     * @return RepositoryName 是否已赋值
                     * 
                     */
                    bool RepositoryNameHasBeenSet() const;

                    /**
                     * 获取是否公有
                     * @return IsPublic 是否公有
                     * 
                     */
                    bool GetIsPublic() const;

                    /**
                     * 设置是否公有
                     * @param _isPublic 是否公有
                     * 
                     */
                    void SetIsPublic(const bool& _isPublic);

                    /**
                     * 判断参数 IsPublic 是否已赋值
                     * @return IsPublic 是否已赋值
                     * 
                     */
                    bool IsPublicHasBeenSet() const;

                    /**
                     * 获取镜像tag名称
                     * @return TagName 镜像tag名称
                     * 
                     */
                    std::string GetTagName() const;

                    /**
                     * 设置镜像tag名称
                     * @param _tagName 镜像tag名称
                     * 
                     */
                    void SetTagName(const std::string& _tagName);

                    /**
                     * 判断参数 TagName 是否已赋值
                     * @return TagName 是否已赋值
                     * 
                     */
                    bool TagNameHasBeenSet() const;

                    /**
                     * 获取镜像server
                     * @return ServerAddr 镜像server
                     * 
                     */
                    std::string GetServerAddr() const;

                    /**
                     * 设置镜像server
                     * @param _serverAddr 镜像server
                     * 
                     */
                    void SetServerAddr(const std::string& _serverAddr);

                    /**
                     * 判断参数 ServerAddr 是否已赋值
                     * @return ServerAddr 是否已赋值
                     * 
                     */
                    bool ServerAddrHasBeenSet() const;

                    /**
                     * 获取镜像拉取地址
                     * @return ImageUrl 镜像拉取地址
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置镜像拉取地址
                     * @param _imageUrl 镜像拉取地址
                     * 
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     * 
                     */
                    bool ImageUrlHasBeenSet() const;

                private:

                    /**
                     * 镜像仓库名称
                     */
                    std::string m_repositoryName;
                    bool m_repositoryNameHasBeenSet;

                    /**
                     * 是否公有
                     */
                    bool m_isPublic;
                    bool m_isPublicHasBeenSet;

                    /**
                     * 镜像tag名称
                     */
                    std::string m_tagName;
                    bool m_tagNameHasBeenSet;

                    /**
                     * 镜像server
                     */
                    std::string m_serverAddr;
                    bool m_serverAddrHasBeenSet;

                    /**
                     * 镜像拉取地址
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDBASERUNIMAGEINFO_H_
