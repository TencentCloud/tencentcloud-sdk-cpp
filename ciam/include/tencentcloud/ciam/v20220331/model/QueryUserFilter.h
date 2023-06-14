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

#ifndef TENCENTCLOUD_CIAM_V20220331_MODEL_QUERYUSERFILTER_H_
#define TENCENTCLOUD_CIAM_V20220331_MODEL_QUERYUSERFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ciam
    {
        namespace V20220331
        {
            namespace Model
            {
                /**
                * 查询用户信息条件
                */
                class QueryUserFilter : public AbstractModel
                {
                public:
                    QueryUserFilter();
                    ~QueryUserFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取属性key
                     * @return PropertyKey 属性key
                     * 
                     */
                    std::string GetPropertyKey() const;

                    /**
                     * 设置属性key
                     * @param _propertyKey 属性key
                     * 
                     */
                    void SetPropertyKey(const std::string& _propertyKey);

                    /**
                     * 判断参数 PropertyKey 是否已赋值
                     * @return PropertyKey 是否已赋值
                     * 
                     */
                    bool PropertyKeyHasBeenSet() const;

                    /**
                     * 获取属性value
                     * @return PropertyValue 属性value
                     * 
                     */
                    std::string GetPropertyValue() const;

                    /**
                     * 设置属性value
                     * @param _propertyValue 属性value
                     * 
                     */
                    void SetPropertyValue(const std::string& _propertyValue);

                    /**
                     * 判断参数 PropertyValue 是否已赋值
                     * @return PropertyValue 是否已赋值
                     * 
                     */
                    bool PropertyValueHasBeenSet() const;

                    /**
                     * 获取逻辑值，等于true，不等于false
                     * @return Logic 逻辑值，等于true，不等于false
                     * 
                     */
                    bool GetLogic() const;

                    /**
                     * 设置逻辑值，等于true，不等于false
                     * @param _logic 逻辑值，等于true，不等于false
                     * 
                     */
                    void SetLogic(const bool& _logic);

                    /**
                     * 判断参数 Logic 是否已赋值
                     * @return Logic 是否已赋值
                     * 
                     */
                    bool LogicHasBeenSet() const;

                    /**
                     * 获取操作逻辑符（支持> < = >= <=  != between）
                     * @return OperateLogic 操作逻辑符（支持> < = >= <=  != between）
                     * 
                     */
                    std::string GetOperateLogic() const;

                    /**
                     * 设置操作逻辑符（支持> < = >= <=  != between）
                     * @param _operateLogic 操作逻辑符（支持> < = >= <=  != between）
                     * 
                     */
                    void SetOperateLogic(const std::string& _operateLogic);

                    /**
                     * 判断参数 OperateLogic 是否已赋值
                     * @return OperateLogic 是否已赋值
                     * 
                     */
                    bool OperateLogicHasBeenSet() const;

                private:

                    /**
                     * 属性key
                     */
                    std::string m_propertyKey;
                    bool m_propertyKeyHasBeenSet;

                    /**
                     * 属性value
                     */
                    std::string m_propertyValue;
                    bool m_propertyValueHasBeenSet;

                    /**
                     * 逻辑值，等于true，不等于false
                     */
                    bool m_logic;
                    bool m_logicHasBeenSet;

                    /**
                     * 操作逻辑符（支持> < = >= <=  != between）
                     */
                    std::string m_operateLogic;
                    bool m_operateLogicHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIAM_V20220331_MODEL_QUERYUSERFILTER_H_
