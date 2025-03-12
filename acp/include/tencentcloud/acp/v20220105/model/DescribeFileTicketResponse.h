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

#ifndef TENCENTCLOUD_ACP_V20220105_MODEL_DESCRIBEFILETICKETRESPONSE_H_
#define TENCENTCLOUD_ACP_V20220105_MODEL_DESCRIBEFILETICKETRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Acp
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * DescribeFileTicket返回参数结构体
                */
                class DescribeFileTicketResponse : public AbstractModel
                {
                public:
                    DescribeFileTicketResponse();
                    ~DescribeFileTicketResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回值, 0:成功, 其他值请查看“返回值”定义
                     * @return Result 返回值, 0:成功, 其他值请查看“返回值”定义
                     * 
                     */
                    int64_t GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取上传url(任务来源为2时:Post方法（100:apk,101:txt）, 任务来源为1时:put方法)
                     * @return UploadUrl 上传url(任务来源为2时:Post方法（100:apk,101:txt）, 任务来源为1时:put方法)
                     * 
                     */
                    std::string GetUploadUrl() const;

                    /**
                     * 判断参数 UploadUrl 是否已赋值
                     * @return UploadUrl 是否已赋值
                     * 
                     */
                    bool UploadUrlHasBeenSet() const;

                    /**
                     * 获取上传url鉴权信息(任务来源为1时上传需要, Authorization参数值)
                     * @return UploadSign 上传url鉴权信息(任务来源为1时上传需要, Authorization参数值)
                     * 
                     */
                    std::string GetUploadSign() const;

                    /**
                     * 判断参数 UploadSign 是否已赋值
                     * @return UploadSign 是否已赋值
                     * 
                     */
                    bool UploadSignHasBeenSet() const;

                    /**
                     * 获取上传文件ID(任务来源为1时提交诊断任务需要)
                     * @return FildID 上传文件ID(任务来源为1时提交诊断任务需要)
                     * 
                     */
                    std::string GetFildID() const;

                    /**
                     * 判断参数 FildID 是否已赋值
                     * @return FildID 是否已赋值
                     * 
                     */
                    bool FildIDHasBeenSet() const;

                private:

                    /**
                     * 返回值, 0:成功, 其他值请查看“返回值”定义
                     */
                    int64_t m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 上传url(任务来源为2时:Post方法（100:apk,101:txt）, 任务来源为1时:put方法)
                     */
                    std::string m_uploadUrl;
                    bool m_uploadUrlHasBeenSet;

                    /**
                     * 上传url鉴权信息(任务来源为1时上传需要, Authorization参数值)
                     */
                    std::string m_uploadSign;
                    bool m_uploadSignHasBeenSet;

                    /**
                     * 上传文件ID(任务来源为1时提交诊断任务需要)
                     */
                    std::string m_fildID;
                    bool m_fildIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ACP_V20220105_MODEL_DESCRIBEFILETICKETRESPONSE_H_
