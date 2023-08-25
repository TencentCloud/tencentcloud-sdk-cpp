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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPACOSDISCOVERYTASKFILESREQUEST_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPACOSDISCOVERYTASKFILESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * DescribeDSPACOSDiscoveryTaskFiles请求参数结构体
                */
                class DescribeDSPACOSDiscoveryTaskFilesRequest : public AbstractModel
                {
                public:
                    DescribeDSPACOSDiscoveryTaskFilesRequest();
                    ~DescribeDSPACOSDiscoveryTaskFilesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取DSPA实例Id
                     * @return DspaId DSPA实例Id
                     * 
                     */
                    std::string GetDspaId() const;

                    /**
                     * 设置DSPA实例Id
                     * @param _dspaId DSPA实例Id
                     * 
                     */
                    void SetDspaId(const std::string& _dspaId);

                    /**
                     * 判断参数 DspaId 是否已赋值
                     * @return DspaId 是否已赋值
                     * 
                     */
                    bool DspaIdHasBeenSet() const;

                    /**
                     * 获取扫描任务ID
                     * @return TaskId 扫描任务ID
                     * 
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 设置扫描任务ID
                     * @param _taskId 扫描任务ID
                     * 
                     */
                    void SetTaskId(const int64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取扫描Bucket任务结果ID
                     * @return BucketResultId 扫描Bucket任务结果ID
                     * 
                     */
                    int64_t GetBucketResultId() const;

                    /**
                     * 设置扫描Bucket任务结果ID
                     * @param _bucketResultId 扫描Bucket任务结果ID
                     * 
                     */
                    void SetBucketResultId(const int64_t& _bucketResultId);

                    /**
                     * 判断参数 BucketResultId 是否已赋值
                     * @return BucketResultId 是否已赋值
                     * 
                     */
                    bool BucketResultIdHasBeenSet() const;

                private:

                    /**
                     * DSPA实例Id
                     */
                    std::string m_dspaId;
                    bool m_dspaIdHasBeenSet;

                    /**
                     * 扫描任务ID
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 扫描Bucket任务结果ID
                     */
                    int64_t m_bucketResultId;
                    bool m_bucketResultIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPACOSDISCOVERYTASKFILESREQUEST_H_
