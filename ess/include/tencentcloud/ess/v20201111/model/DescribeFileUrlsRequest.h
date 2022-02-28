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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEFILEURLSREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEFILEURLSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
#include <tencentcloud/ess/v20201111/model/Agent.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * DescribeFileUrls请求参数结构体
                */
                class DescribeFileUrlsRequest : public AbstractModel
                {
                public:
                    DescribeFileUrlsRequest();
                    ~DescribeFileUrlsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取文件对应的业务类型，目前支持：
- 模板 "TEMPLATE"
- 文档 "DOCUMENT"
- 印章  “SEAL”
- 流程 "FLOW"
                     * @return BusinessType 文件对应的业务类型，目前支持：
- 模板 "TEMPLATE"
- 文档 "DOCUMENT"
- 印章  “SEAL”
- 流程 "FLOW"
                     */
                    std::string GetBusinessType() const;

                    /**
                     * 设置文件对应的业务类型，目前支持：
- 模板 "TEMPLATE"
- 文档 "DOCUMENT"
- 印章  “SEAL”
- 流程 "FLOW"
                     * @param BusinessType 文件对应的业务类型，目前支持：
- 模板 "TEMPLATE"
- 文档 "DOCUMENT"
- 印章  “SEAL”
- 流程 "FLOW"
                     */
                    void SetBusinessType(const std::string& _businessType);

                    /**
                     * 判断参数 BusinessType 是否已赋值
                     * @return BusinessType 是否已赋值
                     */
                    bool BusinessTypeHasBeenSet() const;

                    /**
                     * 获取操作者信息
                     * @return Operator 操作者信息
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置操作者信息
                     * @param Operator 操作者信息
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取业务编号的数组，如模板编号、文档编号、印章编号
                     * @return BusinessIds 业务编号的数组，如模板编号、文档编号、印章编号
                     */
                    std::vector<std::string> GetBusinessIds() const;

                    /**
                     * 设置业务编号的数组，如模板编号、文档编号、印章编号
                     * @param BusinessIds 业务编号的数组，如模板编号、文档编号、印章编号
                     */
                    void SetBusinessIds(const std::vector<std::string>& _businessIds);

                    /**
                     * 判断参数 BusinessIds 是否已赋值
                     * @return BusinessIds 是否已赋值
                     */
                    bool BusinessIdsHasBeenSet() const;

                    /**
                     * 获取文件类型，"JPG", "PDF","ZIP"等
                     * @return FileType 文件类型，"JPG", "PDF","ZIP"等
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置文件类型，"JPG", "PDF","ZIP"等
                     * @param FileType 文件类型，"JPG", "PDF","ZIP"等
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取下载后的文件命名，只有fileType为zip的时候生效
                     * @return FileName 下载后的文件命名，只有fileType为zip的时候生效
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置下载后的文件命名，只有fileType为zip的时候生效
                     * @param FileName 下载后的文件命名，只有fileType为zip的时候生效
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取指定资源起始偏移量
                     * @return Offset 指定资源起始偏移量
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置指定资源起始偏移量
                     * @param Offset 指定资源起始偏移量
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取指定资源数量，查询全部资源则传入-1
                     * @return Limit 指定资源数量，查询全部资源则传入-1
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置指定资源数量，查询全部资源则传入-1
                     * @param Limit 指定资源数量，查询全部资源则传入-1
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取应用相关信息
                     * @return Agent 应用相关信息
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置应用相关信息
                     * @param Agent 应用相关信息
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取下载url过期时间，0: 按默认值5分钟，允许范围：1s~24*60*60s(1天)
                     * @return UrlTtl 下载url过期时间，0: 按默认值5分钟，允许范围：1s~24*60*60s(1天)
                     */
                    int64_t GetUrlTtl() const;

                    /**
                     * 设置下载url过期时间，0: 按默认值5分钟，允许范围：1s~24*60*60s(1天)
                     * @param UrlTtl 下载url过期时间，0: 按默认值5分钟，允许范围：1s~24*60*60s(1天)
                     */
                    void SetUrlTtl(const int64_t& _urlTtl);

                    /**
                     * 判断参数 UrlTtl 是否已赋值
                     * @return UrlTtl 是否已赋值
                     */
                    bool UrlTtlHasBeenSet() const;

                    /**
                     * 获取流程校验发送邮件权限
                     * @return CcToken 流程校验发送邮件权限
                     */
                    std::string GetCcToken() const;

                    /**
                     * 设置流程校验发送邮件权限
                     * @param CcToken 流程校验发送邮件权限
                     */
                    void SetCcToken(const std::string& _ccToken);

                    /**
                     * 判断参数 CcToken 是否已赋值
                     * @return CcToken 是否已赋值
                     */
                    bool CcTokenHasBeenSet() const;

                    /**
                     * 获取场景
                     * @return Scene 场景
                     */
                    std::string GetScene() const;

                    /**
                     * 设置场景
                     * @param Scene 场景
                     */
                    void SetScene(const std::string& _scene);

                    /**
                     * 判断参数 Scene 是否已赋值
                     * @return Scene 是否已赋值
                     */
                    bool SceneHasBeenSet() const;

                private:

                    /**
                     * 文件对应的业务类型，目前支持：
- 模板 "TEMPLATE"
- 文档 "DOCUMENT"
- 印章  “SEAL”
- 流程 "FLOW"
                     */
                    std::string m_businessType;
                    bool m_businessTypeHasBeenSet;

                    /**
                     * 操作者信息
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 业务编号的数组，如模板编号、文档编号、印章编号
                     */
                    std::vector<std::string> m_businessIds;
                    bool m_businessIdsHasBeenSet;

                    /**
                     * 文件类型，"JPG", "PDF","ZIP"等
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 下载后的文件命名，只有fileType为zip的时候生效
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 指定资源起始偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 指定资源数量，查询全部资源则传入-1
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 应用相关信息
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 下载url过期时间，0: 按默认值5分钟，允许范围：1s~24*60*60s(1天)
                     */
                    int64_t m_urlTtl;
                    bool m_urlTtlHasBeenSet;

                    /**
                     * 流程校验发送邮件权限
                     */
                    std::string m_ccToken;
                    bool m_ccTokenHasBeenSet;

                    /**
                     * 场景
                     */
                    std::string m_scene;
                    bool m_sceneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEFILEURLSREQUEST_H_
