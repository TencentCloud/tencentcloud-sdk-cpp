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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CHECKLOCKMETADATAREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CHECKLOCKMETADATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CheckLockMetaData请求参数结构体
                */
                class CheckLockMetaDataRequest : public AbstractModel
                {
                public:
                    CheckLockMetaDataRequest();
                    ~CheckLockMetaDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取锁ID
                     * @return LockId 锁ID
                     * 
                     */
                    int64_t GetLockId() const;

                    /**
                     * 设置锁ID
                     * @param _lockId 锁ID
                     * 
                     */
                    void SetLockId(const int64_t& _lockId);

                    /**
                     * 判断参数 LockId 是否已赋值
                     * @return LockId 是否已赋值
                     * 
                     */
                    bool LockIdHasBeenSet() const;

                    /**
                     * 获取数据源名称
                     * @return DatasourceConnectionName 数据源名称
                     * 
                     */
                    std::string GetDatasourceConnectionName() const;

                    /**
                     * 设置数据源名称
                     * @param _datasourceConnectionName 数据源名称
                     * 
                     */
                    void SetDatasourceConnectionName(const std::string& _datasourceConnectionName);

                    /**
                     * 判断参数 DatasourceConnectionName 是否已赋值
                     * @return DatasourceConnectionName 是否已赋值
                     * 
                     */
                    bool DatasourceConnectionNameHasBeenSet() const;

                    /**
                     * 获取事务ID
                     * @return TxnId 事务ID
                     * 
                     */
                    int64_t GetTxnId() const;

                    /**
                     * 设置事务ID
                     * @param _txnId 事务ID
                     * 
                     */
                    void SetTxnId(const int64_t& _txnId);

                    /**
                     * 判断参数 TxnId 是否已赋值
                     * @return TxnId 是否已赋值
                     * 
                     */
                    bool TxnIdHasBeenSet() const;

                    /**
                     * 获取过期时间ms
                     * @return ElapsedMs 过期时间ms
                     * 
                     */
                    int64_t GetElapsedMs() const;

                    /**
                     * 设置过期时间ms
                     * @param _elapsedMs 过期时间ms
                     * 
                     */
                    void SetElapsedMs(const int64_t& _elapsedMs);

                    /**
                     * 判断参数 ElapsedMs 是否已赋值
                     * @return ElapsedMs 是否已赋值
                     * 
                     */
                    bool ElapsedMsHasBeenSet() const;

                private:

                    /**
                     * 锁ID
                     */
                    int64_t m_lockId;
                    bool m_lockIdHasBeenSet;

                    /**
                     * 数据源名称
                     */
                    std::string m_datasourceConnectionName;
                    bool m_datasourceConnectionNameHasBeenSet;

                    /**
                     * 事务ID
                     */
                    int64_t m_txnId;
                    bool m_txnIdHasBeenSet;

                    /**
                     * 过期时间ms
                     */
                    int64_t m_elapsedMs;
                    bool m_elapsedMsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CHECKLOCKMETADATAREQUEST_H_
