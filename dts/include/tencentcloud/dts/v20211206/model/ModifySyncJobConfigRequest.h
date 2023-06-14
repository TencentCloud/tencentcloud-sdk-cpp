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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYSYNCJOBCONFIGREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYSYNCJOBCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/Objects.h>
#include <tencentcloud/dts/v20211206/model/DynamicOptions.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * ModifySyncJobConfig请求参数结构体
                */
                class ModifySyncJobConfigRequest : public AbstractModel
                {
                public:
                    ModifySyncJobConfigRequest();
                    ~ModifySyncJobConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取同步任务id
                     * @return JobId 同步任务id
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置同步任务id
                     * @param _jobId 同步任务id
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取修改后的同步对象
                     * @return DynamicObjects 修改后的同步对象
                     * 
                     */
                    Objects GetDynamicObjects() const;

                    /**
                     * 设置修改后的同步对象
                     * @param _dynamicObjects 修改后的同步对象
                     * 
                     */
                    void SetDynamicObjects(const Objects& _dynamicObjects);

                    /**
                     * 判断参数 DynamicObjects 是否已赋值
                     * @return DynamicObjects 是否已赋值
                     * 
                     */
                    bool DynamicObjectsHasBeenSet() const;

                    /**
                     * 获取修改后的同步任务选项
                     * @return DynamicOptions 修改后的同步任务选项
                     * 
                     */
                    DynamicOptions GetDynamicOptions() const;

                    /**
                     * 设置修改后的同步任务选项
                     * @param _dynamicOptions 修改后的同步任务选项
                     * 
                     */
                    void SetDynamicOptions(const DynamicOptions& _dynamicOptions);

                    /**
                     * 判断参数 DynamicOptions 是否已赋值
                     * @return DynamicOptions 是否已赋值
                     * 
                     */
                    bool DynamicOptionsHasBeenSet() const;

                private:

                    /**
                     * 同步任务id
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 修改后的同步对象
                     */
                    Objects m_dynamicObjects;
                    bool m_dynamicObjectsHasBeenSet;

                    /**
                     * 修改后的同步任务选项
                     */
                    DynamicOptions m_dynamicOptions;
                    bool m_dynamicOptionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYSYNCJOBCONFIGREQUEST_H_
