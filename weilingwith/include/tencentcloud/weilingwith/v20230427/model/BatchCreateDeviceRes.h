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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_BATCHCREATEDEVICERES_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_BATCHCREATEDEVICERES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/weilingwith/v20230427/model/CreateDeviceSucceeded.h>
#include <tencentcloud/weilingwith/v20230427/model/CreateDeviceFailed.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 批量新增设备接口返回结果
                */
                class BatchCreateDeviceRes : public AbstractModel
                {
                public:
                    BatchCreateDeviceRes();
                    ~BatchCreateDeviceRes() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取新增成功的设备列表
                     * @return SuccessSet 新增成功的设备列表
                     * 
                     */
                    std::vector<CreateDeviceSucceeded> GetSuccessSet() const;

                    /**
                     * 设置新增成功的设备列表
                     * @param _successSet 新增成功的设备列表
                     * 
                     */
                    void SetSuccessSet(const std::vector<CreateDeviceSucceeded>& _successSet);

                    /**
                     * 判断参数 SuccessSet 是否已赋值
                     * @return SuccessSet 是否已赋值
                     * 
                     */
                    bool SuccessSetHasBeenSet() const;

                    /**
                     * 获取新增失败的设备列表
                     * @return FailSet 新增失败的设备列表
                     * 
                     */
                    std::vector<CreateDeviceFailed> GetFailSet() const;

                    /**
                     * 设置新增失败的设备列表
                     * @param _failSet 新增失败的设备列表
                     * 
                     */
                    void SetFailSet(const std::vector<CreateDeviceFailed>& _failSet);

                    /**
                     * 判断参数 FailSet 是否已赋值
                     * @return FailSet 是否已赋值
                     * 
                     */
                    bool FailSetHasBeenSet() const;

                private:

                    /**
                     * 新增成功的设备列表
                     */
                    std::vector<CreateDeviceSucceeded> m_successSet;
                    bool m_successSetHasBeenSet;

                    /**
                     * 新增失败的设备列表
                     */
                    std::vector<CreateDeviceFailed> m_failSet;
                    bool m_failSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_BATCHCREATEDEVICERES_H_
