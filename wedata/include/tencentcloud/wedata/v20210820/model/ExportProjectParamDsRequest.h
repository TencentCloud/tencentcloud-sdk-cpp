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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_EXPORTPROJECTPARAMDSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_EXPORTPROJECTPARAMDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * ExportProjectParamDs请求参数结构体
                */
                class ExportProjectParamDsRequest : public AbstractModel
                {
                public:
                    ExportProjectParamDsRequest();
                    ~ExportProjectParamDsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取域名
                     * @return OriginDomain 域名
                     * 
                     */
                    std::string GetOriginDomain() const;

                    /**
                     * 设置域名
                     * @param _originDomain 域名
                     * 
                     */
                    void SetOriginDomain(const std::string& _originDomain);

                    /**
                     * 判断参数 OriginDomain 是否已赋值
                     * @return OriginDomain 是否已赋值
                     * 
                     */
                    bool OriginDomainHasBeenSet() const;

                    /**
                     * 获取发布范围 ALL, PUBLISH, PARTIAL 全量 增量 自选
                     * @return Range 发布范围 ALL, PUBLISH, PARTIAL 全量 增量 自选
                     * 
                     */
                    std::string GetRange() const;

                    /**
                     * 设置发布范围 ALL, PUBLISH, PARTIAL 全量 增量 自选
                     * @param _range 发布范围 ALL, PUBLISH, PARTIAL 全量 增量 自选
                     * 
                     */
                    void SetRange(const std::string& _range);

                    /**
                     * 判断参数 Range 是否已赋值
                     * @return Range 是否已赋值
                     * 
                     */
                    bool RangeHasBeenSet() const;

                    /**
                     * 获取增量发布时间 OffsetDateTime格式 2021-11-05T23:59:59Z
                     * @return PublishTime 增量发布时间 OffsetDateTime格式 2021-11-05T23:59:59Z
                     * 
                     */
                    std::string GetPublishTime() const;

                    /**
                     * 设置增量发布时间 OffsetDateTime格式 2021-11-05T23:59:59Z
                     * @param _publishTime 增量发布时间 OffsetDateTime格式 2021-11-05T23:59:59Z
                     * 
                     */
                    void SetPublishTime(const std::string& _publishTime);

                    /**
                     * 判断参数 PublishTime 是否已赋值
                     * @return PublishTime 是否已赋值
                     * 
                     */
                    bool PublishTimeHasBeenSet() const;

                    /**
                     * 获取自选导出参数
                     * @return Params 自选导出参数
                     * 
                     */
                    std::vector<std::string> GetParams() const;

                    /**
                     * 设置自选导出参数
                     * @param _params 自选导出参数
                     * 
                     */
                    void SetParams(const std::vector<std::string>& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 域名
                     */
                    std::string m_originDomain;
                    bool m_originDomainHasBeenSet;

                    /**
                     * 发布范围 ALL, PUBLISH, PARTIAL 全量 增量 自选
                     */
                    std::string m_range;
                    bool m_rangeHasBeenSet;

                    /**
                     * 增量发布时间 OffsetDateTime格式 2021-11-05T23:59:59Z
                     */
                    std::string m_publishTime;
                    bool m_publishTimeHasBeenSet;

                    /**
                     * 自选导出参数
                     */
                    std::vector<std::string> m_params;
                    bool m_paramsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_EXPORTPROJECTPARAMDSREQUEST_H_
