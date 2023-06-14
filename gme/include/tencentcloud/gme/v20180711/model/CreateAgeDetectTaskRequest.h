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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_CREATEAGEDETECTTASKREQUEST_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_CREATEAGEDETECTTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gme/v20180711/model/AgeDetectTask.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * CreateAgeDetectTask请求参数结构体
                */
                class CreateAgeDetectTaskRequest : public AbstractModel
                {
                public:
                    CreateAgeDetectTaskRequest();
                    ~CreateAgeDetectTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用id
                     * @return BizId 应用id
                     * 
                     */
                    int64_t GetBizId() const;

                    /**
                     * 设置应用id
                     * @param _bizId 应用id
                     * 
                     */
                    void SetBizId(const int64_t& _bizId);

                    /**
                     * 判断参数 BizId 是否已赋值
                     * @return BizId 是否已赋值
                     * 
                     */
                    bool BizIdHasBeenSet() const;

                    /**
                     * 获取语音检测子任务列表，列表最多支持100个检测子任务。结构体中包含：
<li>DataId：数据的唯一ID</li>
<li>Url：数据文件的url，为 urlencode 编码，流式则为拉流地址</li>
                     * @return Tasks 语音检测子任务列表，列表最多支持100个检测子任务。结构体中包含：
<li>DataId：数据的唯一ID</li>
<li>Url：数据文件的url，为 urlencode 编码，流式则为拉流地址</li>
                     * 
                     */
                    std::vector<AgeDetectTask> GetTasks() const;

                    /**
                     * 设置语音检测子任务列表，列表最多支持100个检测子任务。结构体中包含：
<li>DataId：数据的唯一ID</li>
<li>Url：数据文件的url，为 urlencode 编码，流式则为拉流地址</li>
                     * @param _tasks 语音检测子任务列表，列表最多支持100个检测子任务。结构体中包含：
<li>DataId：数据的唯一ID</li>
<li>Url：数据文件的url，为 urlencode 编码，流式则为拉流地址</li>
                     * 
                     */
                    void SetTasks(const std::vector<AgeDetectTask>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取任务结束时gme后台会自动触发回调
                     * @return Callback 任务结束时gme后台会自动触发回调
                     * 
                     */
                    std::string GetCallback() const;

                    /**
                     * 设置任务结束时gme后台会自动触发回调
                     * @param _callback 任务结束时gme后台会自动触发回调
                     * 
                     */
                    void SetCallback(const std::string& _callback);

                    /**
                     * 判断参数 Callback 是否已赋值
                     * @return Callback 是否已赋值
                     * 
                     */
                    bool CallbackHasBeenSet() const;

                private:

                    /**
                     * 应用id
                     */
                    int64_t m_bizId;
                    bool m_bizIdHasBeenSet;

                    /**
                     * 语音检测子任务列表，列表最多支持100个检测子任务。结构体中包含：
<li>DataId：数据的唯一ID</li>
<li>Url：数据文件的url，为 urlencode 编码，流式则为拉流地址</li>
                     */
                    std::vector<AgeDetectTask> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * 任务结束时gme后台会自动触发回调
                     */
                    std::string m_callback;
                    bool m_callbackHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_CREATEAGEDETECTTASKREQUEST_H_
