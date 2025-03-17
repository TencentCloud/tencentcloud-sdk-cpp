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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_SYNCTASKBINDRESOURCERESULT_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_SYNCTASKBINDRESOURCERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/BindResourceResult.h>
#include <tencentcloud/ssl/v20191205/model/Error.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * 异步任务证书关联云资源结果
                */
                class SyncTaskBindResourceResult : public AbstractModel
                {
                public:
                    SyncTaskBindResourceResult();
                    ~SyncTaskBindResourceResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务ID
                     * @return TaskId 任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param _taskId 任务ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取关联云资源结果
                     * @return BindResourceResult 关联云资源结果
                     * 
                     */
                    std::vector<BindResourceResult> GetBindResourceResult() const;

                    /**
                     * 设置关联云资源结果
                     * @param _bindResourceResult 关联云资源结果
                     * 
                     */
                    void SetBindResourceResult(const std::vector<BindResourceResult>& _bindResourceResult);

                    /**
                     * 判断参数 BindResourceResult 是否已赋值
                     * @return BindResourceResult 是否已赋值
                     * 
                     */
                    bool BindResourceResultHasBeenSet() const;

                    /**
                     * 获取关联云资源异步查询结果： 0表示查询中， 1表示查询成功。 2表示查询异常； 若状态为1，则查看BindResourceResult结果；若状态为2，则查看Error原因
                     * @return Status 关联云资源异步查询结果： 0表示查询中， 1表示查询成功。 2表示查询异常； 若状态为1，则查看BindResourceResult结果；若状态为2，则查看Error原因
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置关联云资源异步查询结果： 0表示查询中， 1表示查询成功。 2表示查询异常； 若状态为1，则查看BindResourceResult结果；若状态为2，则查看Error原因
                     * @param _status 关联云资源异步查询结果： 0表示查询中， 1表示查询成功。 2表示查询异常； 若状态为1，则查看BindResourceResult结果；若状态为2，则查看Error原因
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取关联云资源错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Error 关联云资源错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Error GetError() const;

                    /**
                     * 设置关联云资源错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _error 关联云资源错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetError(const Error& _error);

                    /**
                     * 判断参数 Error 是否已赋值
                     * @return Error 是否已赋值
                     * 
                     */
                    bool ErrorHasBeenSet() const;

                    /**
                     * 获取当前结果缓存时间
                     * @return CacheTime 当前结果缓存时间
                     * 
                     */
                    std::string GetCacheTime() const;

                    /**
                     * 设置当前结果缓存时间
                     * @param _cacheTime 当前结果缓存时间
                     * 
                     */
                    void SetCacheTime(const std::string& _cacheTime);

                    /**
                     * 判断参数 CacheTime 是否已赋值
                     * @return CacheTime 是否已赋值
                     * 
                     */
                    bool CacheTimeHasBeenSet() const;

                private:

                    /**
                     * 任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 关联云资源结果
                     */
                    std::vector<BindResourceResult> m_bindResourceResult;
                    bool m_bindResourceResultHasBeenSet;

                    /**
                     * 关联云资源异步查询结果： 0表示查询中， 1表示查询成功。 2表示查询异常； 若状态为1，则查看BindResourceResult结果；若状态为2，则查看Error原因
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 关联云资源错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Error m_error;
                    bool m_errorHasBeenSet;

                    /**
                     * 当前结果缓存时间
                     */
                    std::string m_cacheTime;
                    bool m_cacheTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_SYNCTASKBINDRESOURCERESULT_H_
