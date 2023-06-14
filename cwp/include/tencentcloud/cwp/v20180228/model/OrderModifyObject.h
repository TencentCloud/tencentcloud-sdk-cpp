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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_ORDERMODIFYOBJECT_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_ORDERMODIFYOBJECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 订单变配参数对象
                */
                class OrderModifyObject : public AbstractModel
                {
                public:
                    OrderModifyObject();
                    ~OrderModifyObject() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源ID
                     * @return ResourceId 资源ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源ID
                     * @param _resourceId 资源ID
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取新产品标识,这里支持PRO_VERSION 专业版,FLAGSHIP 旗舰版
                     * @return NewSubProductCode 新产品标识,这里支持PRO_VERSION 专业版,FLAGSHIP 旗舰版
                     * 
                     */
                    std::string GetNewSubProductCode() const;

                    /**
                     * 设置新产品标识,这里支持PRO_VERSION 专业版,FLAGSHIP 旗舰版
                     * @param _newSubProductCode 新产品标识,这里支持PRO_VERSION 专业版,FLAGSHIP 旗舰版
                     * 
                     */
                    void SetNewSubProductCode(const std::string& _newSubProductCode);

                    /**
                     * 判断参数 NewSubProductCode 是否已赋值
                     * @return NewSubProductCode 是否已赋值
                     * 
                     */
                    bool NewSubProductCodeHasBeenSet() const;

                    /**
                     * 获取扩容/缩容数,变配子产品忽略该参数
                     * @return InquireNum 扩容/缩容数,变配子产品忽略该参数
                     * 
                     */
                    int64_t GetInquireNum() const;

                    /**
                     * 设置扩容/缩容数,变配子产品忽略该参数
                     * @param _inquireNum 扩容/缩容数,变配子产品忽略该参数
                     * 
                     */
                    void SetInquireNum(const int64_t& _inquireNum);

                    /**
                     * 判断参数 InquireNum 是否已赋值
                     * @return InquireNum 是否已赋值
                     * 
                     */
                    bool InquireNumHasBeenSet() const;

                private:

                    /**
                     * 资源ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 新产品标识,这里支持PRO_VERSION 专业版,FLAGSHIP 旗舰版
                     */
                    std::string m_newSubProductCode;
                    bool m_newSubProductCodeHasBeenSet;

                    /**
                     * 扩容/缩容数,变配子产品忽略该参数
                     */
                    int64_t m_inquireNum;
                    bool m_inquireNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ORDERMODIFYOBJECT_H_
