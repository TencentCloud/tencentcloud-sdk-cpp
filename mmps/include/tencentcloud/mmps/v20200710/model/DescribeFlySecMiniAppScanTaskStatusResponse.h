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

#ifndef TENCENTCLOUD_MMPS_V20200710_MODEL_DESCRIBEFLYSECMINIAPPSCANTASKSTATUSRESPONSE_H_
#define TENCENTCLOUD_MMPS_V20200710_MODEL_DESCRIBEFLYSECMINIAPPSCANTASKSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mmps
    {
        namespace V20200710
        {
            namespace Model
            {
                /**
                * DescribeFlySecMiniAppScanTaskStatus返回参数结构体
                */
                class DescribeFlySecMiniAppScanTaskStatusResponse : public AbstractModel
                {
                public:
                    DescribeFlySecMiniAppScanTaskStatusResponse();
                    ~DescribeFlySecMiniAppScanTaskStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回值, 0:成功, 其他值请查看“返回值”定义
                     * @return Ret 返回值, 0:成功, 其他值请查看“返回值”定义
                     * 
                     */
                    int64_t GetRet() const;

                    /**
                     * 判断参数 Ret 是否已赋值
                     * @return Ret 是否已赋值
                     * 
                     */
                    bool RetHasBeenSet() const;

                    /**
                     * 获取诊断状态, 0:排队中, 1:成功, 2:失败, 3:进行中
                     * @return Status 诊断状态, 0:排队中, 1:成功, 2:失败, 3:进行中
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取诊断失败错误码
                     * @return Errno 诊断失败错误码
                     * 
                     */
                    int64_t GetErrno() const;

                    /**
                     * 判断参数 Errno 是否已赋值
                     * @return Errno 是否已赋值
                     * 
                     */
                    bool ErrnoHasBeenSet() const;

                    /**
                     * 获取小程序名称
                     * @return MiniAppName 小程序名称
                     * 
                     */
                    std::string GetMiniAppName() const;

                    /**
                     * 判断参数 MiniAppName 是否已赋值
                     * @return MiniAppName 是否已赋值
                     * 
                     */
                    bool MiniAppNameHasBeenSet() const;

                    /**
                     * 获取小程序版本
                     * @return MiniAppVersion 小程序版本
                     * 
                     */
                    std::string GetMiniAppVersion() const;

                    /**
                     * 判断参数 MiniAppVersion 是否已赋值
                     * @return MiniAppVersion 是否已赋值
                     * 
                     */
                    bool MiniAppVersionHasBeenSet() const;

                private:

                    /**
                     * 返回值, 0:成功, 其他值请查看“返回值”定义
                     */
                    int64_t m_ret;
                    bool m_retHasBeenSet;

                    /**
                     * 诊断状态, 0:排队中, 1:成功, 2:失败, 3:进行中
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 诊断失败错误码
                     */
                    int64_t m_errno;
                    bool m_errnoHasBeenSet;

                    /**
                     * 小程序名称
                     */
                    std::string m_miniAppName;
                    bool m_miniAppNameHasBeenSet;

                    /**
                     * 小程序版本
                     */
                    std::string m_miniAppVersion;
                    bool m_miniAppVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MMPS_V20200710_MODEL_DESCRIBEFLYSECMINIAPPSCANTASKSTATUSRESPONSE_H_
