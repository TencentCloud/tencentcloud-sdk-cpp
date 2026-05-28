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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATECOSOBJECTSCANTASKREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATECOSOBJECTSCANTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CreateCosObjectScanTask请求参数结构体
                */
                class CreateCosObjectScanTaskRequest : public AbstractModel
                {
                public:
                    CreateCosObjectScanTaskRequest();
                    ~CreateCosObjectScanTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>1: 敏感数据识别 2:恶意文件扫描 3:批量扫描敏感数据</p>
                     * @return TaskType <p>1: 敏感数据识别 2:恶意文件扫描 3:批量扫描敏感数据</p>
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置<p>1: 敏感数据识别 2:恶意文件扫描 3:批量扫描敏感数据</p>
                     * @param _taskType <p>1: 敏感数据识别 2:恶意文件扫描 3:批量扫描敏感数据</p>
                     * 
                     */
                    void SetTaskType(const int64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>存储桶列表</p>
                     * @return BucketSet <p>存储桶列表</p>
                     * 
                     */
                    std::vector<std::string> GetBucketSet() const;

                    /**
                     * 设置<p>存储桶列表</p>
                     * @param _bucketSet <p>存储桶列表</p>
                     * 
                     */
                    void SetBucketSet(const std::vector<std::string>& _bucketSet);

                    /**
                     * 判断参数 BucketSet 是否已赋值
                     * @return BucketSet 是否已赋值
                     * 
                     */
                    bool BucketSetHasBeenSet() const;

                    /**
                     * 获取<p>任务参数</p>
                     * @return TaskArgs <p>任务参数</p>
                     * 
                     */
                    std::string GetTaskArgs() const;

                    /**
                     * 设置<p>任务参数</p>
                     * @param _taskArgs <p>任务参数</p>
                     * 
                     */
                    void SetTaskArgs(const std::string& _taskArgs);

                    /**
                     * 判断参数 TaskArgs 是否已赋值
                     * @return TaskArgs 是否已赋值
                     * 
                     */
                    bool TaskArgsHasBeenSet() const;

                    /**
                     * 获取<p>是否全部扫描</p>
                     * @return IsScanAll <p>是否全部扫描</p>
                     * 
                     */
                    bool GetIsScanAll() const;

                    /**
                     * 设置<p>是否全部扫描</p>
                     * @param _isScanAll <p>是否全部扫描</p>
                     * 
                     */
                    void SetIsScanAll(const bool& _isScanAll);

                    /**
                     * 判断参数 IsScanAll 是否已赋值
                     * @return IsScanAll 是否已赋值
                     * 
                     */
                    bool IsScanAllHasBeenSet() const;

                    /**
                     * 获取<p>扫描时需要剔除的存储桶</p>
                     * @return DeleteBucketSet <p>扫描时需要剔除的存储桶</p>
                     * 
                     */
                    std::vector<std::string> GetDeleteBucketSet() const;

                    /**
                     * 设置<p>扫描时需要剔除的存储桶</p>
                     * @param _deleteBucketSet <p>扫描时需要剔除的存储桶</p>
                     * 
                     */
                    void SetDeleteBucketSet(const std::vector<std::string>& _deleteBucketSet);

                    /**
                     * 判断参数 DeleteBucketSet 是否已赋值
                     * @return DeleteBucketSet 是否已赋值
                     * 
                     */
                    bool DeleteBucketSetHasBeenSet() const;

                private:

                    /**
                     * <p>1: 敏感数据识别 2:恶意文件扫描 3:批量扫描敏感数据</p>
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>存储桶列表</p>
                     */
                    std::vector<std::string> m_bucketSet;
                    bool m_bucketSetHasBeenSet;

                    /**
                     * <p>任务参数</p>
                     */
                    std::string m_taskArgs;
                    bool m_taskArgsHasBeenSet;

                    /**
                     * <p>是否全部扫描</p>
                     */
                    bool m_isScanAll;
                    bool m_isScanAllHasBeenSet;

                    /**
                     * <p>扫描时需要剔除的存储桶</p>
                     */
                    std::vector<std::string> m_deleteBucketSet;
                    bool m_deleteBucketSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATECOSOBJECTSCANTASKREQUEST_H_
