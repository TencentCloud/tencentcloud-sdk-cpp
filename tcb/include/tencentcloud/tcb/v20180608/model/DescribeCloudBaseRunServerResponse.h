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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASERUNSERVERRESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASERUNSERVERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/CloudBaseRunServerVersionItem.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeCloudBaseRunServer返回参数结构体
                */
                class DescribeCloudBaseRunServerResponse : public AbstractModel
                {
                public:
                    DescribeCloudBaseRunServerResponse();
                    ~DescribeCloudBaseRunServerResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取个数
                     * @return TotalCount 个数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取版本列表
                     * @return VersionItems 版本列表
                     * 
                     */
                    std::vector<CloudBaseRunServerVersionItem> GetVersionItems() const;

                    /**
                     * 判断参数 VersionItems 是否已赋值
                     * @return VersionItems 是否已赋值
                     * 
                     */
                    bool VersionItemsHasBeenSet() const;

                    /**
                     * 获取服务名称
                     * @return ServerName 服务名称
                     * 
                     */
                    std::string GetServerName() const;

                    /**
                     * 判断参数 ServerName 是否已赋值
                     * @return ServerName 是否已赋值
                     * 
                     */
                    bool ServerNameHasBeenSet() const;

                    /**
                     * 获取是否对于外网开放
                     * @return IsPublic 是否对于外网开放
                     * 
                     */
                    bool GetIsPublic() const;

                    /**
                     * 判断参数 IsPublic 是否已赋值
                     * @return IsPublic 是否已赋值
                     * 
                     */
                    bool IsPublicHasBeenSet() const;

                    /**
                     * 获取镜像仓库
                     * @return ImageRepo 镜像仓库
                     * 
                     */
                    std::string GetImageRepo() const;

                    /**
                     * 判断参数 ImageRepo 是否已赋值
                     * @return ImageRepo 是否已赋值
                     * 
                     */
                    bool ImageRepoHasBeenSet() const;

                    /**
                     * 获取流量配置的类型（FLOW,URL_PARAMS)
                     * @return TrafficType 流量配置的类型（FLOW,URL_PARAMS)
                     * 
                     */
                    std::string GetTrafficType() const;

                    /**
                     * 判断参数 TrafficType 是否已赋值
                     * @return TrafficType 是否已赋值
                     * 
                     */
                    bool TrafficTypeHasBeenSet() const;

                    /**
                     * 获取服务创建类型，默认为空，一键部署为oneclick
                     * @return SourceType 服务创建类型，默认为空，一键部署为oneclick
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取服务标签, function: 托管函数
                     * @return Tag 服务标签, function: 托管函数
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                private:

                    /**
                     * 个数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 版本列表
                     */
                    std::vector<CloudBaseRunServerVersionItem> m_versionItems;
                    bool m_versionItemsHasBeenSet;

                    /**
                     * 服务名称
                     */
                    std::string m_serverName;
                    bool m_serverNameHasBeenSet;

                    /**
                     * 是否对于外网开放
                     */
                    bool m_isPublic;
                    bool m_isPublicHasBeenSet;

                    /**
                     * 镜像仓库
                     */
                    std::string m_imageRepo;
                    bool m_imageRepoHasBeenSet;

                    /**
                     * 流量配置的类型（FLOW,URL_PARAMS)
                     */
                    std::string m_trafficType;
                    bool m_trafficTypeHasBeenSet;

                    /**
                     * 服务创建类型，默认为空，一键部署为oneclick
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 服务标签, function: 托管函数
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASERUNSERVERRESPONSE_H_
