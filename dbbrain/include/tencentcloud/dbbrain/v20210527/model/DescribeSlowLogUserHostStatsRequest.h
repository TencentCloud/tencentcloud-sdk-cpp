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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBESLOWLOGUSERHOSTSTATSREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBESLOWLOGUSERHOSTSTATSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeSlowLogUserHostStats请求参数结构体
                */
                class DescribeSlowLogUserHostStatsRequest : public AbstractModel
                {
                public:
                    DescribeSlowLogUserHostStatsRequest();
                    ~DescribeSlowLogUserHostStatsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例 ID。可通过 <a href="https://cloud.tencent.com/document/api/1130/57798">DescribeDiagDBInstances</a> 接口获取。</p>
                     * @return InstanceId <p>实例 ID。可通过 <a href="https://cloud.tencent.com/document/api/1130/57798">DescribeDiagDBInstances</a> 接口获取。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID。可通过 <a href="https://cloud.tencent.com/document/api/1130/57798">DescribeDiagDBInstances</a> 接口获取。</p>
                     * @param _instanceId <p>实例 ID。可通过 <a href="https://cloud.tencent.com/document/api/1130/57798">DescribeDiagDBInstances</a> 接口获取。</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>查询范围的开始时间，格式: &quot;yyyy-MM-dd&#39;T&#39;HH:mm:ssXXX&quot;。</p>
                     * @return StartTime <p>查询范围的开始时间，格式: &quot;yyyy-MM-dd&#39;T&#39;HH:mm:ssXXX&quot;。</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>查询范围的开始时间，格式: &quot;yyyy-MM-dd&#39;T&#39;HH:mm:ssXXX&quot;。</p>
                     * @param _startTime <p>查询范围的开始时间，格式: &quot;yyyy-MM-dd&#39;T&#39;HH:mm:ssXXX&quot;。</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>查询范围的结束时间，格式: &quot;yyyy-MM-dd&#39;T&#39;HH:mm:ssXXX&quot;。</p>
                     * @return EndTime <p>查询范围的结束时间，格式: &quot;yyyy-MM-dd&#39;T&#39;HH:mm:ssXXX&quot;。</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>查询范围的结束时间，格式: &quot;yyyy-MM-dd&#39;T&#39;HH:mm:ssXXX&quot;。</p>
                     * @param _endTime <p>查询范围的结束时间，格式: &quot;yyyy-MM-dd&#39;T&#39;HH:mm:ssXXX&quot;。</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>服务产品类型，支持值：&quot;mysql&quot; - 云数据库 MySQL；&quot;cynosdb&quot; - 云数据库 TDSQL-C for MySQL，&quot;sqlserver&quot; - 云数据库 SQL Server，默认为&quot;mysql&quot;。</p>
                     * @return Product <p>服务产品类型，支持值：&quot;mysql&quot; - 云数据库 MySQL；&quot;cynosdb&quot; - 云数据库 TDSQL-C for MySQL，&quot;sqlserver&quot; - 云数据库 SQL Server，默认为&quot;mysql&quot;。</p>
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置<p>服务产品类型，支持值：&quot;mysql&quot; - 云数据库 MySQL；&quot;cynosdb&quot; - 云数据库 TDSQL-C for MySQL，&quot;sqlserver&quot; - 云数据库 SQL Server，默认为&quot;mysql&quot;。</p>
                     * @param _product <p>服务产品类型，支持值：&quot;mysql&quot; - 云数据库 MySQL；&quot;cynosdb&quot; - 云数据库 TDSQL-C for MySQL，&quot;sqlserver&quot; - 云数据库 SQL Server，默认为&quot;mysql&quot;。</p>
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取<p>SQL模板的MD5值</p>
                     * @return Md5 <p>SQL模板的MD5值</p>
                     * 
                     */
                    std::string GetMd5() const;

                    /**
                     * 设置<p>SQL模板的MD5值</p>
                     * @param _md5 <p>SQL模板的MD5值</p>
                     * 
                     */
                    void SetMd5(const std::string& _md5);

                    /**
                     * 判断参数 Md5 是否已赋值
                     * @return Md5 是否已赋值
                     * 
                     */
                    bool Md5HasBeenSet() const;

                    /**
                     * 获取<p>仅Redis产品使用；实例Proxy ID。</p>
                     * @return InstanceProxyId <p>仅Redis产品使用；实例Proxy ID。</p>
                     * 
                     */
                    std::string GetInstanceProxyId() const;

                    /**
                     * 设置<p>仅Redis产品使用；实例Proxy ID。</p>
                     * @param _instanceProxyId <p>仅Redis产品使用；实例Proxy ID。</p>
                     * 
                     */
                    void SetInstanceProxyId(const std::string& _instanceProxyId);

                    /**
                     * 判断参数 InstanceProxyId 是否已赋值
                     * @return InstanceProxyId 是否已赋值
                     * 
                     */
                    bool InstanceProxyIdHasBeenSet() const;

                    /**
                     * 获取<p>仅Redis产品使用；命令。</p>
                     * @return Cmd <p>仅Redis产品使用；命令。</p>
                     * 
                     */
                    std::string GetCmd() const;

                    /**
                     * 设置<p>仅Redis产品使用；命令。</p>
                     * @param _cmd <p>仅Redis产品使用；命令。</p>
                     * 
                     */
                    void SetCmd(const std::string& _cmd);

                    /**
                     * 判断参数 Cmd 是否已赋值
                     * @return Cmd 是否已赋值
                     * 
                     */
                    bool CmdHasBeenSet() const;

                private:

                    /**
                     * <p>实例 ID。可通过 <a href="https://cloud.tencent.com/document/api/1130/57798">DescribeDiagDBInstances</a> 接口获取。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>查询范围的开始时间，格式: &quot;yyyy-MM-dd&#39;T&#39;HH:mm:ssXXX&quot;。</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>查询范围的结束时间，格式: &quot;yyyy-MM-dd&#39;T&#39;HH:mm:ssXXX&quot;。</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>服务产品类型，支持值：&quot;mysql&quot; - 云数据库 MySQL；&quot;cynosdb&quot; - 云数据库 TDSQL-C for MySQL，&quot;sqlserver&quot; - 云数据库 SQL Server，默认为&quot;mysql&quot;。</p>
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * <p>SQL模板的MD5值</p>
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                    /**
                     * <p>仅Redis产品使用；实例Proxy ID。</p>
                     */
                    std::string m_instanceProxyId;
                    bool m_instanceProxyIdHasBeenSet;

                    /**
                     * <p>仅Redis产品使用；命令。</p>
                     */
                    std::string m_cmd;
                    bool m_cmdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBESLOWLOGUSERHOSTSTATSREQUEST_H_
