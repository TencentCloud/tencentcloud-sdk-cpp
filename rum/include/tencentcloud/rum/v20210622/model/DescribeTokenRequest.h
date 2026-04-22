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
                     * 获取<p>筛选条件</p>
                     * @return FormListString <p>筛选条件</p>
                     * 
                     */
                    std::string GetFormListString() const;

                    /**
                     * 设置<p>筛选条件</p>
                     * @param _formListString <p>筛选条件</p>
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
                     * 获取<p>仅对比模式下填写，筛选条件A</p>
                     * @return FormListAString <p>仅对比模式下填写，筛选条件A</p>
                     * 
                     */
                    std::string GetFormListAString() const;

                    /**
                     * 设置<p>仅对比模式下填写，筛选条件A</p>
                     * @param _formListAString <p>仅对比模式下填写，筛选条件A</p>
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
                     * 获取<p>仅对比模式下填写，筛选条件B</p>
                     * @return FormListBString <p>仅对比模式下填写，筛选条件B</p>
                     * 
                     */
                    std::string GetFormListBString() const;

                    /**
                     * 设置<p>仅对比模式下填写，筛选条件B</p>
                     * @param _formListBString <p>仅对比模式下填写，筛选条件B</p>
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
                     * 获取<p>请求头</p>
                     * @return RequestHeader <p>请求头</p>
                     * 
                     */
                    std::string GetRequestHeader() const;

                    /**
                     * 设置<p>请求头</p>
                     * @param _requestHeader <p>请求头</p>
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
                     * 获取<p>拓展字段</p>
                     * @return ExtraData <p>拓展字段</p>
                     * 
                     */
                    std::string GetExtraData() const;

                    /**
                     * 设置<p>拓展字段</p>
                     * @param _extraData <p>拓展字段</p>
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
                     * <p>筛选条件</p>
                     */
                    std::string m_formListString;
                    bool m_formListStringHasBeenSet;

                    /**
                     * <p>仅对比模式下填写，筛选条件A</p>
                     */
                    std::string m_formListAString;
                    bool m_formListAStringHasBeenSet;

                    /**
                     * <p>仅对比模式下填写，筛选条件B</p>
                     */
                    std::string m_formListBString;
                    bool m_formListBStringHasBeenSet;

                    /**
                     * <p>请求头</p>
                     */
                    std::string m_requestHeader;
                    bool m_requestHeaderHasBeenSet;

                    /**
                     * <p>拓展字段</p>
                     */
                    std::string m_extraData;
                    bool m_extraDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETOKENREQUEST_H_
