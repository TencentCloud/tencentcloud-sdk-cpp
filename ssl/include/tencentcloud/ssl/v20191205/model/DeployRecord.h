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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DEPLOYRECORD_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DEPLOYRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/DeployRecordList.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * 托管记录
                */
                class DeployRecord : public AbstractModel
                {
                public:
                    DeployRecord();
                    ~DeployRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总数
                     * @return TotalCount 总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置总数
                     * @param _totalCount 总数
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取成功总数
                     * @return SuccessTotalCount 成功总数
                     * 
                     */
                    int64_t GetSuccessTotalCount() const;

                    /**
                     * 设置成功总数
                     * @param _successTotalCount 成功总数
                     * 
                     */
                    void SetSuccessTotalCount(const int64_t& _successTotalCount);

                    /**
                     * 判断参数 SuccessTotalCount 是否已赋值
                     * @return SuccessTotalCount 是否已赋值
                     * 
                     */
                    bool SuccessTotalCountHasBeenSet() const;

                    /**
                     * 获取失败总数
                     * @return FailedTotalCount 失败总数
                     * 
                     */
                    int64_t GetFailedTotalCount() const;

                    /**
                     * 设置失败总数
                     * @param _failedTotalCount 失败总数
                     * 
                     */
                    void SetFailedTotalCount(const int64_t& _failedTotalCount);

                    /**
                     * 判断参数 FailedTotalCount 是否已赋值
                     * @return FailedTotalCount 是否已赋值
                     * 
                     */
                    bool FailedTotalCountHasBeenSet() const;

                    /**
                     * 获取部署中总数
                     * @return RunningTotalCount 部署中总数
                     * 
                     */
                    int64_t GetRunningTotalCount() const;

                    /**
                     * 设置部署中总数
                     * @param _runningTotalCount 部署中总数
                     * 
                     */
                    void SetRunningTotalCount(const int64_t& _runningTotalCount);

                    /**
                     * 判断参数 RunningTotalCount 是否已赋值
                     * @return RunningTotalCount 是否已赋值
                     * 
                     */
                    bool RunningTotalCountHasBeenSet() const;

                    /**
                     * 获取部署记录类型 0 为部署， 1 为回滚
                     * @return Type 部署记录类型 0 为部署， 1 为回滚
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置部署记录类型 0 为部署， 1 为回滚
                     * @param _type 部署记录类型 0 为部署， 1 为回滚
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取部署记录详情列表
                     * @return RecordDetailList 部署记录详情列表
                     * 
                     */
                    std::vector<DeployRecordList> GetRecordDetailList() const;

                    /**
                     * 设置部署记录详情列表
                     * @param _recordDetailList 部署记录详情列表
                     * 
                     */
                    void SetRecordDetailList(const std::vector<DeployRecordList>& _recordDetailList);

                    /**
                     * 判断参数 RecordDetailList 是否已赋值
                     * @return RecordDetailList 是否已赋值
                     * 
                     */
                    bool RecordDetailListHasBeenSet() const;

                    /**
                     * 获取托管资源部署状态：0 等待部署， 1 部署成功， 2 部署失败 3 部署中， 4 回滚成功， 5 回滚失败
                     * @return Status 托管资源部署状态：0 等待部署， 1 部署成功， 2 部署失败 3 部署中， 4 回滚成功， 5 回滚失败
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置托管资源部署状态：0 等待部署， 1 部署成功， 2 部署失败 3 部署中， 4 回滚成功， 5 回滚失败
                     * @param _status 托管资源部署状态：0 等待部署， 1 部署成功， 2 部署失败 3 部署中， 4 回滚成功， 5 回滚失败
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取托管资源创建时间
                     * @return CreateTime 托管资源创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置托管资源创建时间
                     * @param _createTime 托管资源创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 成功总数
                     */
                    int64_t m_successTotalCount;
                    bool m_successTotalCountHasBeenSet;

                    /**
                     * 失败总数
                     */
                    int64_t m_failedTotalCount;
                    bool m_failedTotalCountHasBeenSet;

                    /**
                     * 部署中总数
                     */
                    int64_t m_runningTotalCount;
                    bool m_runningTotalCountHasBeenSet;

                    /**
                     * 部署记录类型 0 为部署， 1 为回滚
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 部署记录详情列表
                     */
                    std::vector<DeployRecordList> m_recordDetailList;
                    bool m_recordDetailListHasBeenSet;

                    /**
                     * 托管资源部署状态：0 等待部署， 1 部署成功， 2 部署失败 3 部署中， 4 回滚成功， 5 回滚失败
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 托管资源创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DEPLOYRECORD_H_
