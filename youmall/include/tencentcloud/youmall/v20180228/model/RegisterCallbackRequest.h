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

#ifndef TENCENTCLOUD_YOUMALL_V20180228_MODEL_REGISTERCALLBACKREQUEST_H_
#define TENCENTCLOUD_YOUMALL_V20180228_MODEL_REGISTERCALLBACKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Youmall
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * RegisterCallback请求参数结构体
                */
                class RegisterCallbackRequest : public AbstractModel
                {
                public:
                    RegisterCallbackRequest();
                    ~RegisterCallbackRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集团id，通过"指定身份标识获取客户门店列表"接口获取
                     * @return CompanyId 集团id，通过"指定身份标识获取客户门店列表"接口获取
                     * 
                     */
                    std::string GetCompanyId() const;

                    /**
                     * 设置集团id，通过"指定身份标识获取客户门店列表"接口获取
                     * @param _companyId 集团id，通过"指定身份标识获取客户门店列表"接口获取
                     * 
                     */
                    void SetCompanyId(const std::string& _companyId);

                    /**
                     * 判断参数 CompanyId 是否已赋值
                     * @return CompanyId 是否已赋值
                     * 
                     */
                    bool CompanyIdHasBeenSet() const;

                    /**
                     * 获取通知回调地址，完整url，示例（http://youmall.tencentcloudapi.com/）
                     * @return BackUrl 通知回调地址，完整url，示例（http://youmall.tencentcloudapi.com/）
                     * 
                     */
                    std::string GetBackUrl() const;

                    /**
                     * 设置通知回调地址，完整url，示例（http://youmall.tencentcloudapi.com/）
                     * @param _backUrl 通知回调地址，完整url，示例（http://youmall.tencentcloudapi.com/）
                     * 
                     */
                    void SetBackUrl(const std::string& _backUrl);

                    /**
                     * 判断参数 BackUrl 是否已赋值
                     * @return BackUrl 是否已赋值
                     * 
                     */
                    bool BackUrlHasBeenSet() const;

                    /**
                     * 获取请求时间戳
                     * @return Time 请求时间戳
                     * 
                     */
                    uint64_t GetTime() const;

                    /**
                     * 设置请求时间戳
                     * @param _time 请求时间戳
                     * 
                     */
                    void SetTime(const uint64_t& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取是否需要顾客图片，1-需要图片，其它-不需要图片
                     * @return NeedFacePic 是否需要顾客图片，1-需要图片，其它-不需要图片
                     * 
                     */
                    uint64_t GetNeedFacePic() const;

                    /**
                     * 设置是否需要顾客图片，1-需要图片，其它-不需要图片
                     * @param _needFacePic 是否需要顾客图片，1-需要图片，其它-不需要图片
                     * 
                     */
                    void SetNeedFacePic(const uint64_t& _needFacePic);

                    /**
                     * 判断参数 NeedFacePic 是否已赋值
                     * @return NeedFacePic 是否已赋值
                     * 
                     */
                    bool NeedFacePicHasBeenSet() const;

                private:

                    /**
                     * 集团id，通过"指定身份标识获取客户门店列表"接口获取
                     */
                    std::string m_companyId;
                    bool m_companyIdHasBeenSet;

                    /**
                     * 通知回调地址，完整url，示例（http://youmall.tencentcloudapi.com/）
                     */
                    std::string m_backUrl;
                    bool m_backUrlHasBeenSet;

                    /**
                     * 请求时间戳
                     */
                    uint64_t m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 是否需要顾客图片，1-需要图片，其它-不需要图片
                     */
                    uint64_t m_needFacePic;
                    bool m_needFacePicHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YOUMALL_V20180228_MODEL_REGISTERCALLBACKREQUEST_H_
