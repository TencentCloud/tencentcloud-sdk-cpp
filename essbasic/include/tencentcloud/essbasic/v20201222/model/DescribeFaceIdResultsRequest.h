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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_DESCRIBEFACEIDRESULTSREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_DESCRIBEFACEIDRESULTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20201222/model/Caller.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20201222
        {
            namespace Model
            {
                /**
                * DescribeFaceIdResults请求参数结构体
                */
                class DescribeFaceIdResultsRequest : public AbstractModel
                {
                public:
                    DescribeFaceIdResultsRequest();
                    ~DescribeFaceIdResultsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取调用方信息
                     * @return Caller 调用方信息
                     * 
                     */
                    Caller GetCaller() const;

                    /**
                     * 设置调用方信息
                     * @param _caller 调用方信息
                     * 
                     */
                    void SetCaller(const Caller& _caller);

                    /**
                     * 判断参数 Caller 是否已赋值
                     * @return Caller 是否已赋值
                     * 
                     */
                    bool CallerHasBeenSet() const;

                    /**
                     * 获取慧眼业务ID
                     * @return WbAppId 慧眼业务ID
                     * 
                     */
                    std::string GetWbAppId() const;

                    /**
                     * 设置慧眼业务ID
                     * @param _wbAppId 慧眼业务ID
                     * 
                     */
                    void SetWbAppId(const std::string& _wbAppId);

                    /**
                     * 判断参数 WbAppId 是否已赋值
                     * @return WbAppId 是否已赋值
                     * 
                     */
                    bool WbAppIdHasBeenSet() const;

                    /**
                     * 获取订单号(orderNo); 限制在3个或以内
                     * @return OrderNumbers 订单号(orderNo); 限制在3个或以内
                     * 
                     */
                    std::vector<std::string> GetOrderNumbers() const;

                    /**
                     * 设置订单号(orderNo); 限制在3个或以内
                     * @param _orderNumbers 订单号(orderNo); 限制在3个或以内
                     * 
                     */
                    void SetOrderNumbers(const std::vector<std::string>& _orderNumbers);

                    /**
                     * 判断参数 OrderNumbers 是否已赋值
                     * @return OrderNumbers 是否已赋值
                     * 
                     */
                    bool OrderNumbersHasBeenSet() const;

                    /**
                     * 获取1:视频+照片,2:照片,3:视频,0（或其他数字）:无; 可选
                     * @return FileType 1:视频+照片,2:照片,3:视频,0（或其他数字）:无; 可选
                     * 
                     */
                    int64_t GetFileType() const;

                    /**
                     * 设置1:视频+照片,2:照片,3:视频,0（或其他数字）:无; 可选
                     * @param _fileType 1:视频+照片,2:照片,3:视频,0（或其他数字）:无; 可选
                     * 
                     */
                    void SetFileType(const int64_t& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                private:

                    /**
                     * 调用方信息
                     */
                    Caller m_caller;
                    bool m_callerHasBeenSet;

                    /**
                     * 慧眼业务ID
                     */
                    std::string m_wbAppId;
                    bool m_wbAppIdHasBeenSet;

                    /**
                     * 订单号(orderNo); 限制在3个或以内
                     */
                    std::vector<std::string> m_orderNumbers;
                    bool m_orderNumbersHasBeenSet;

                    /**
                     * 1:视频+照片,2:照片,3:视频,0（或其他数字）:无; 可选
                     */
                    int64_t m_fileType;
                    bool m_fileTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_DESCRIBEFACEIDRESULTSREQUEST_H_
