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

#ifndef TENCENTCLOUD_TAV_V20190118_MODEL_SCANFILERESPONSE_H_
#define TENCENTCLOUD_TAV_V20190118_MODEL_SCANFILERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tav
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * ScanFile返回参数结构体
                */
                class ScanFileResponse : public AbstractModel
                {
                public:
                    ScanFileResponse();
                    ~ScanFileResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取接口调用状态，成功返回200，失败返回400
                     * @return Status 接口调用状态，成功返回200，失败返回400
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取接口调用描述信息，成功返回"success"，失败返回"invalid request"
                     * @return Info 接口调用描述信息，成功返回"success"，失败返回"invalid request"
                     * 
                     */
                    std::string GetInfo() const;

                    /**
                     * 判断参数 Info 是否已赋值
                     * @return Info 是否已赋值
                     * 
                     */
                    bool InfoHasBeenSet() const;

                    /**
                     * 获取异步扫描任务提交成功返回success
                     * @return Data 异步扫描任务提交成功返回success
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 接口调用状态，成功返回200，失败返回400
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 接口调用描述信息，成功返回"success"，失败返回"invalid request"
                     */
                    std::string m_info;
                    bool m_infoHasBeenSet;

                    /**
                     * 异步扫描任务提交成功返回success
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAV_V20190118_MODEL_SCANFILERESPONSE_H_
