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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEASSETSYNCRESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEASSETSYNCRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeAssetSync返回参数结构体
                */
                class DescribeAssetSyncResponse : public AbstractModel
                {
                public:
                    DescribeAssetSyncResponse();
                    ~DescribeAssetSyncResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>返回状态<br>1 更新中<br>2 更新完成<br>3 更新失败<br>4 更新失败</p>
                     * @return Status <p>返回状态<br>1 更新中<br>2 更新完成<br>3 更新失败<br>4 更新失败</p>
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
                     * 获取<p>success 成功<br>其他失败</p>
                     * @return ReturnMsg <p>success 成功<br>其他失败</p>
                     * 
                     */
                    std::string GetReturnMsg() const;

                    /**
                     * 判断参数 ReturnMsg 是否已赋值
                     * @return ReturnMsg 是否已赋值
                     * 
                     */
                    bool ReturnMsgHasBeenSet() const;

                    /**
                     * 获取<p>0 成功<br>非0 失败</p>
                     * @return ReturnCode <p>0 成功<br>非0 失败</p>
                     * 
                     */
                    uint64_t GetReturnCode() const;

                    /**
                     * 判断参数 ReturnCode 是否已赋值
                     * @return ReturnCode 是否已赋值
                     * 
                     */
                    bool ReturnCodeHasBeenSet() const;

                    /**
                     * 获取<p>已有CVM数量</p>
                     * @return CVMCount <p>已有CVM数量</p>
                     * 
                     */
                    int64_t GetCVMCount() const;

                    /**
                     * 判断参数 CVMCount 是否已赋值
                     * @return CVMCount 是否已赋值
                     * 
                     */
                    bool CVMCountHasBeenSet() const;

                private:

                    /**
                     * <p>返回状态<br>1 更新中<br>2 更新完成<br>3 更新失败<br>4 更新失败</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>success 成功<br>其他失败</p>
                     */
                    std::string m_returnMsg;
                    bool m_returnMsgHasBeenSet;

                    /**
                     * <p>0 成功<br>非0 失败</p>
                     */
                    uint64_t m_returnCode;
                    bool m_returnCodeHasBeenSet;

                    /**
                     * <p>已有CVM数量</p>
                     */
                    int64_t m_cVMCount;
                    bool m_cVMCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEASSETSYNCRESPONSE_H_
