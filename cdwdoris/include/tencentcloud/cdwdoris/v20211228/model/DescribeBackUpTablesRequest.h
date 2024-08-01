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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEBACKUPTABLESREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEBACKUPTABLESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/DorisSourceInfo.h>
#include <tencentcloud/cdwdoris/v20211228/model/CosSourceInfo.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * DescribeBackUpTables请求参数结构体
                */
                class DescribeBackUpTablesRequest : public AbstractModel
                {
                public:
                    DescribeBackUpTablesRequest();
                    ~DescribeBackUpTablesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群id
                     * @return InstanceId 集群id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群id
                     * @param _instanceId 集群id
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
                     * 获取0为默认。1时是对远端的doris进行备份，不周期，一次性。2时为cos恢复，一次性
                     * @return BackupType 0为默认。1时是对远端的doris进行备份，不周期，一次性。2时为cos恢复，一次性
                     * 
                     */
                    int64_t GetBackupType() const;

                    /**
                     * 设置0为默认。1时是对远端的doris进行备份，不周期，一次性。2时为cos恢复，一次性
                     * @param _backupType 0为默认。1时是对远端的doris进行备份，不周期，一次性。2时为cos恢复，一次性
                     * 
                     */
                    void SetBackupType(const int64_t& _backupType);

                    /**
                     * 判断参数 BackupType 是否已赋值
                     * @return BackupType 是否已赋值
                     * 
                     */
                    bool BackupTypeHasBeenSet() const;

                    /**
                     * 获取远端doris集群的连接信息
                     * @return DorisSourceInfo 远端doris集群的连接信息
                     * 
                     */
                    DorisSourceInfo GetDorisSourceInfo() const;

                    /**
                     * 设置远端doris集群的连接信息
                     * @param _dorisSourceInfo 远端doris集群的连接信息
                     * 
                     */
                    void SetDorisSourceInfo(const DorisSourceInfo& _dorisSourceInfo);

                    /**
                     * 判断参数 DorisSourceInfo 是否已赋值
                     * @return DorisSourceInfo 是否已赋值
                     * 
                     */
                    bool DorisSourceInfoHasBeenSet() const;

                    /**
                     * 获取cos信息
                     * @return CosSourceInfo cos信息
                     * 
                     */
                    CosSourceInfo GetCosSourceInfo() const;

                    /**
                     * 设置cos信息
                     * @param _cosSourceInfo cos信息
                     * 
                     */
                    void SetCosSourceInfo(const CosSourceInfo& _cosSourceInfo);

                    /**
                     * 判断参数 CosSourceInfo 是否已赋值
                     * @return CosSourceInfo 是否已赋值
                     * 
                     */
                    bool CosSourceInfoHasBeenSet() const;

                private:

                    /**
                     * 集群id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 0为默认。1时是对远端的doris进行备份，不周期，一次性。2时为cos恢复，一次性
                     */
                    int64_t m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * 远端doris集群的连接信息
                     */
                    DorisSourceInfo m_dorisSourceInfo;
                    bool m_dorisSourceInfoHasBeenSet;

                    /**
                     * cos信息
                     */
                    CosSourceInfo m_cosSourceInfo;
                    bool m_cosSourceInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEBACKUPTABLESREQUEST_H_
