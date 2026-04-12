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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETOKENREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETOKENREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeToken请求参数结构体
                */
                class DescribeTokenRequest : public AbstractModel
                {
                public:
                    DescribeTokenRequest();
                    ~DescribeTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取筛选条件
                     * @return FormListString 筛选条件
                     * 
                     */
                    std::string GetFormListString() const;

                    /**
                     * 设置筛选条件
                     * @param _formListString 筛选条件
                     * 
                     */
                    void SetFormListString(const std::string& _formListString);

                    /**
                     * 判断参数 FormListString 是否已赋值
                     * @return FormListString 是否已赋值
                     * 
                     */
                    bool FormListStringHasBeenSet() const;

                    /**
                     * 获取仅对比模式下填写，筛选条件A
                     * @return FormListAString 仅对比模式下填写，筛选条件A
                     * 
                     */
                    std::string GetFormListAString() const;

                    /**
                     * 设置仅对比模式下填写，筛选条件A
                     * @param _formListAString 仅对比模式下填写，筛选条件A
                     * 
                     */
                    void SetFormListAString(const std::string& _formListAString);

                    /**
                     * 判断参数 FormListAString 是否已赋值
                     * @return FormListAString 是否已赋值
                     * 
                     */
                    bool FormListAStringHasBeenSet() const;

                    /**
                     * 获取仅对比模式下填写，筛选条件B
                     * @return FormListBString 仅对比模式下填写，筛选条件B
                     * 
                     */
                    std::string GetFormListBString() const;

                    /**
                     * 设置仅对比模式下填写，筛选条件B
                     * @param _formListBString 仅对比模式下填写，筛选条件B
                     * 
                     */
                    void SetFormListBString(const std::string& _formListBString);

                    /**
                     * 判断参数 FormListBString 是否已赋值
                     * @return FormListBString 是否已赋值
                     * 
                     */
                    bool FormListBStringHasBeenSet() const;

                    /**
                     * 获取请求头
                     * @return RequestHeader 请求头
                     * 
                     */
                    std::string GetRequestHeader() const;

                    /**
                     * 设置请求头
                     * @param _requestHeader 请求头
                     * 
                     */
                    void SetRequestHeader(const std::string& _requestHeader);

                    /**
                     * 判断参数 RequestHeader 是否已赋值
                     * @return RequestHeader 是否已赋值
                     * 
                     */
                    bool RequestHeaderHasBeenSet() const;

                    /**
                     * 获取拓展字段
                     * @return ExtraData 拓展字段
                     * 
                     */
                    std::string GetExtraData() const;

                    /**
                     * 设置拓展字段
                     * @param _extraData 拓展字段
                     * 
                     */
                    void SetExtraData(const std::string& _extraData);

                    /**
                     * 判断参数 ExtraData 是否已赋值
                     * @return ExtraData 是否已赋值
                     * 
                     */
                    bool ExtraDataHasBeenSet() const;

                private:

                    /**
                     * 筛选条件
                     */
                    std::string m_formListString;
                    bool m_formListStringHasBeenSet;

                    /**
                     * 仅对比模式下填写，筛选条件A
                     */
                    std::string m_formListAString;
                    bool m_formListAStringHasBeenSet;

                    /**
                     * 仅对比模式下填写，筛选条件B
                     */
                    std::string m_formListBString;
                    bool m_formListBStringHasBeenSet;

                    /**
                     * 请求头
                     */
                    std::string m_requestHeader;
                    bool m_requestHeaderHasBeenSet;

                    /**
                     * 拓展字段
                     */
                    std::string m_extraData;
                    bool m_extraDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETOKENREQUEST_H_
