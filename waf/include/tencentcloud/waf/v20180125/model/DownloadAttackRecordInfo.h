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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DOWNLOADATTACKRECORDINFO_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DOWNLOADATTACKRECORDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 下载攻击日志记录数据项
                */
                class DownloadAttackRecordInfo : public AbstractModel
                {
                public:
                    DownloadAttackRecordInfo();
                    ~DownloadAttackRecordInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取记录ID
                     * @return Id 记录ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置记录ID
                     * @param _id 记录ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取下载任务名
                     * @return TaskName 下载任务名
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置下载任务名
                     * @param _taskName 下载任务名
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

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
                     * 获取域名
                     * @return Host 域名
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置域名
                     * @param _host 域名
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取当前下载任务的日志条数
                     * @return Count 当前下载任务的日志条数
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置当前下载任务的日志条数
                     * @param _count 当前下载任务的日志条数
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取下载任务运行状态：-1-下载超时，0-下载等待，1-下载完成，2-下载失败，4-正在下载
                     * @return Status 下载任务运行状态：-1-下载超时，0-下载等待，1-下载完成，2-下载失败，4-正在下载
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置下载任务运行状态：-1-下载超时，0-下载等待，1-下载完成，2-下载失败，4-正在下载
                     * @param _status 下载任务运行状态：-1-下载超时，0-下载等待，1-下载完成，2-下载失败，4-正在下载
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
                     * 获取下载文件URL
                     * @return Url 下载文件URL
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置下载文件URL
                     * @param _url 下载文件URL
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取最后更新修改时间
                     * @return ModifyTime 最后更新修改时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置最后更新修改时间
                     * @param _modifyTime 最后更新修改时间
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取过期时间
                     * @return ExpireTime 过期时间
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置过期时间
                     * @param _expireTime 过期时间
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取下载任务需下载的日志总条数
                     * @return TotalCount 下载任务需下载的日志总条数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置下载任务需下载的日志总条数
                     * @param _totalCount 下载任务需下载的日志总条数
                     * 
                     */
                    void SetTotalCount(const uint64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 记录ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 下载任务名
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 域名
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 当前下载任务的日志条数
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 下载任务运行状态：-1-下载超时，0-下载等待，1-下载完成，2-下载失败，4-正在下载
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 下载文件URL
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 最后更新修改时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 过期时间
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 下载任务需下载的日志总条数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DOWNLOADATTACKRECORDINFO_H_
