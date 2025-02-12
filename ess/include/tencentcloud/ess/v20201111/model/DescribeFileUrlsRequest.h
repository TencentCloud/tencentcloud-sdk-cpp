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
                     * 获取执行本接口操作的员工信息。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * @return Operator 执行本接口操作的员工信息。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置执行本接口操作的员工信息。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * @param _operator 执行本接口操作的员工信息。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * 
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取文件对应的业务类型，目前支持：<ul><li>**FLOW ** : <font color="red">如需下载合同文件请选择此项</font></li><li>**TEMPLATE ** : 如需下载模板文件请选择此项</li><li>**DOCUMENT  **: 如需下载文档文件请选择此项</li><li>**SEAL  **: 如需下载印章图片请选择此项</li><li>**DIGITFILE**: 如需下载加签文件请选择此项</li></ul>
                     * @return BusinessType 文件对应的业务类型，目前支持：<ul><li>**FLOW ** : <font color="red">如需下载合同文件请选择此项</font></li><li>**TEMPLATE ** : 如需下载模板文件请选择此项</li><li>**DOCUMENT  **: 如需下载文档文件请选择此项</li><li>**SEAL  **: 如需下载印章图片请选择此项</li><li>**DIGITFILE**: 如需下载加签文件请选择此项</li></ul>
                     * 
                     */
                    std::string GetBusinessType() const;

                    /**
                     * 设置文件对应的业务类型，目前支持：<ul><li>**FLOW ** : <font color="red">如需下载合同文件请选择此项</font></li><li>**TEMPLATE ** : 如需下载模板文件请选择此项</li><li>**DOCUMENT  **: 如需下载文档文件请选择此项</li><li>**SEAL  **: 如需下载印章图片请选择此项</li><li>**DIGITFILE**: 如需下载加签文件请选择此项</li></ul>
                     * @param _businessType 文件对应的业务类型，目前支持：<ul><li>**FLOW ** : <font color="red">如需下载合同文件请选择此项</font></li><li>**TEMPLATE ** : 如需下载模板文件请选择此项</li><li>**DOCUMENT  **: 如需下载文档文件请选择此项</li><li>**SEAL  **: 如需下载印章图片请选择此项</li><li>**DIGITFILE**: 如需下载加签文件请选择此项</li></ul>
                     * 
                     */
                    void SetBusinessType(const std::string& _businessType);

                    /**
                     * 判断参数 BusinessType 是否已赋值
                     * @return BusinessType 是否已赋值
                     * 
                     */
                    bool BusinessTypeHasBeenSet() const;

                    /**
                     * 获取业务编号的数组，取值如下：<ul><li>流程编号</li><li>模板编号</li><li>文档编号</li><li>印章编号</li><li>加签文件编号</li><li>如需下载合同文件请传入FlowId，最大支持20个资源</li></ul>
                     * @return BusinessIds 业务编号的数组，取值如下：<ul><li>流程编号</li><li>模板编号</li><li>文档编号</li><li>印章编号</li><li>加签文件编号</li><li>如需下载合同文件请传入FlowId，最大支持20个资源</li></ul>
                     * 
                     */
                    std::vector<std::string> GetBusinessIds() const;

                    /**
                     * 设置业务编号的数组，取值如下：<ul><li>流程编号</li><li>模板编号</li><li>文档编号</li><li>印章编号</li><li>加签文件编号</li><li>如需下载合同文件请传入FlowId，最大支持20个资源</li></ul>
                     * @param _businessIds 业务编号的数组，取值如下：<ul><li>流程编号</li><li>模板编号</li><li>文档编号</li><li>印章编号</li><li>加签文件编号</li><li>如需下载合同文件请传入FlowId，最大支持20个资源</li></ul>
                     * 
                     */
                    void SetBusinessIds(const std::vector<std::string>& _businessIds);

                    /**
                     * 判断参数 BusinessIds 是否已赋值
                     * @return BusinessIds 是否已赋值
                     * 
                     */
                    bool BusinessIdsHasBeenSet() const;

                    /**
                     * 获取下载后的文件命名，只有FileType为zip的时候生效
                     * @return FileName 下载后的文件命名，只有FileType为zip的时候生效
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置下载后的文件命名，只有FileType为zip的时候生效
                     * @param _fileName 下载后的文件命名，只有FileType为zip的时候生效
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取要下载的文件类型，取值如下：
<ul>
<li>JPG</li>
<li>PDF</li>
<li>ZIP</li>
</ul>
                     * @return FileType 要下载的文件类型，取值如下：
<ul>
<li>JPG</li>
<li>PDF</li>
<li>ZIP</li>
</ul>
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置要下载的文件类型，取值如下：
<ul>
<li>JPG</li>
<li>PDF</li>
<li>ZIP</li>
</ul>
                     * @param _fileType 要下载的文件类型，取值如下：
<ul>
<li>JPG</li>
<li>PDF</li>
<li>ZIP</li>
</ul>
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取指定分页返回第几页的数据，如果不传默认返回第一页，页码从 0 开始，即首页为 0，最大 1000。
                     * @return Offset 指定分页返回第几页的数据，如果不传默认返回第一页，页码从 0 开始，即首页为 0，最大 1000。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置指定分页返回第几页的数据，如果不传默认返回第一页，页码从 0 开始，即首页为 0，最大 1000。
                     * @param _offset 指定分页返回第几页的数据，如果不传默认返回第一页，页码从 0 开始，即首页为 0，最大 1000。
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取指定分页每页返回的数据条数，如果不传默认为 20，单页最大支持 100。
                     * @return Limit 指定分页每页返回的数据条数，如果不传默认为 20，单页最大支持 100。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置指定分页每页返回的数据条数，如果不传默认为 20，单页最大支持 100。
                     * @param _limit 指定分页每页返回的数据条数，如果不传默认为 20，单页最大支持 100。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取下载url过期时间，单位秒。0: 按默认值5分钟，允许范围：1s~24x60x60s(1天)
                     * @return UrlTtl 下载url过期时间，单位秒。0: 按默认值5分钟，允许范围：1s~24x60x60s(1天)
                     * 
                     */
                    int64_t GetUrlTtl() const;

                    /**
                     * 设置下载url过期时间，单位秒。0: 按默认值5分钟，允许范围：1s~24x60x60s(1天)
                     * @param _urlTtl 下载url过期时间，单位秒。0: 按默认值5分钟，允许范围：1s~24x60x60s(1天)
                     * 
                     */
                    void SetUrlTtl(const int64_t& _urlTtl);

                    /**
                     * 判断参数 UrlTtl 是否已赋值
                     * @return UrlTtl 是否已赋值
                     * 
                     */
                    bool UrlTtlHasBeenSet() const;

                    /**
                     * 获取暂不开放
                     * @return CcToken 暂不开放
                     * @deprecated
                     */
                    std::string GetCcToken() const;

                    /**
                     * 设置暂不开放
                     * @param _ccToken 暂不开放
                     * @deprecated
                     */
                    void SetCcToken(const std::string& _ccToken);

                    /**
                     * 判断参数 CcToken 是否已赋值
                     * @return CcToken 是否已赋值
                     * @deprecated
                     */
                    bool CcTokenHasBeenSet() const;

                    /**
                     * 获取暂不开放
                     * @return Scene 暂不开放
                     * @deprecated
                     */
                    std::string GetScene() const;

                    /**
                     * 设置暂不开放
                     * @param _scene 暂不开放
                     * @deprecated
                     */
                    void SetScene(const std::string& _scene);

                    /**
                     * 判断参数 Scene 是否已赋值
                     * @return Scene 是否已赋值
                     * @deprecated
                     */
                    bool SceneHasBeenSet() const;

                    /**
                     * 获取代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * @return Agent 代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * @param _agent 代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * 
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     * 
                     */
                    bool AgentHasBeenSet() const;

                private:

                    /**
                     * 执行本接口操作的员工信息。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 文件对应的业务类型，目前支持：<ul><li>**FLOW ** : <font color="red">如需下载合同文件请选择此项</font></li><li>**TEMPLATE ** : 如需下载模板文件请选择此项</li><li>**DOCUMENT  **: 如需下载文档文件请选择此项</li><li>**SEAL  **: 如需下载印章图片请选择此项</li><li>**DIGITFILE**: 如需下载加签文件请选择此项</li></ul>
                     */
                    std::string m_businessType;
                    bool m_businessTypeHasBeenSet;

                    /**
                     * 业务编号的数组，取值如下：<ul><li>流程编号</li><li>模板编号</li><li>文档编号</li><li>印章编号</li><li>加签文件编号</li><li>如需下载合同文件请传入FlowId，最大支持20个资源</li></ul>
                     */
                    std::vector<std::string> m_businessIds;
                    bool m_businessIdsHasBeenSet;

                    /**
                     * 下载后的文件命名，只有FileType为zip的时候生效
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 要下载的文件类型，取值如下：
<ul>
<li>JPG</li>
<li>PDF</li>
<li>ZIP</li>
</ul>
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 指定分页返回第几页的数据，如果不传默认返回第一页，页码从 0 开始，即首页为 0，最大 1000。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 指定分页每页返回的数据条数，如果不传默认为 20，单页最大支持 100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 下载url过期时间，单位秒。0: 按默认值5分钟，允许范围：1s~24x60x60s(1天)
                     */
                    int64_t m_urlTtl;
                    bool m_urlTtlHasBeenSet;

                    /**
                     * 暂不开放
                     */
                    std::string m_ccToken;
                    bool m_ccTokenHasBeenSet;

                    /**
                     * 暂不开放
                     */
                    std::string m_scene;
                    bool m_sceneHasBeenSet;

                    /**
                     * 代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEFILEURLSREQUEST_H_
