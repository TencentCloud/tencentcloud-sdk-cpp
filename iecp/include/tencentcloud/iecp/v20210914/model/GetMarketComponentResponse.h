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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_GETMARKETCOMPONENTRESPONSE_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_GETMARKETCOMPONENTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * GetMarketComponent返回参数结构体
                */
                class GetMarketComponentResponse : public AbstractModel
                {
                public:
                    GetMarketComponentResponse();
                    ~GetMarketComponentResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取组件ID
                     * @return ID 组件ID
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取组件名称
                     * @return AppName 组件名称
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取发行组织
                     * @return Author 发行组织
                     * 
                     */
                    std::string GetAuthor() const;

                    /**
                     * 判断参数 Author 是否已赋值
                     * @return Author 是否已赋值
                     * 
                     */
                    bool AuthorHasBeenSet() const;

                    /**
                     * 获取发布时间
                     * @return ReleaseTime 发布时间
                     * 
                     */
                    std::string GetReleaseTime() const;

                    /**
                     * 判断参数 ReleaseTime 是否已赋值
                     * @return ReleaseTime 是否已赋值
                     * 
                     */
                    bool ReleaseTimeHasBeenSet() const;

                    /**
                     * 获取组件简介
                     * @return Outline 组件简介
                     * 
                     */
                    std::string GetOutline() const;

                    /**
                     * 判断参数 Outline 是否已赋值
                     * @return Outline 是否已赋值
                     * 
                     */
                    bool OutlineHasBeenSet() const;

                    /**
                     * 获取详细介绍链接
                     * @return Detail 详细介绍链接
                     * 
                     */
                    std::string GetDetail() const;

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取图标连接
                     * @return Icon 图标连接
                     * 
                     */
                    std::string GetIcon() const;

                    /**
                     * 判断参数 Icon 是否已赋值
                     * @return Icon 是否已赋值
                     * 
                     */
                    bool IconHasBeenSet() const;

                    /**
                     * 获取组件版本
                     * @return Version 组件版本
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取组件可视化配置
                     * @return WorkloadVisualConfig 组件可视化配置
                     * 
                     */
                    std::string GetWorkloadVisualConfig() const;

                    /**
                     * 判断参数 WorkloadVisualConfig 是否已赋值
                     * @return WorkloadVisualConfig 是否已赋值
                     * 
                     */
                    bool WorkloadVisualConfigHasBeenSet() const;

                private:

                    /**
                     * 组件ID
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 组件名称
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 发行组织
                     */
                    std::string m_author;
                    bool m_authorHasBeenSet;

                    /**
                     * 发布时间
                     */
                    std::string m_releaseTime;
                    bool m_releaseTimeHasBeenSet;

                    /**
                     * 组件简介
                     */
                    std::string m_outline;
                    bool m_outlineHasBeenSet;

                    /**
                     * 详细介绍链接
                     */
                    std::string m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * 图标连接
                     */
                    std::string m_icon;
                    bool m_iconHasBeenSet;

                    /**
                     * 组件版本
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 组件可视化配置
                     */
                    std::string m_workloadVisualConfig;
                    bool m_workloadVisualConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_GETMARKETCOMPONENTRESPONSE_H_
