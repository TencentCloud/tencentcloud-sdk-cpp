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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_PARAMMODIFYRESULT_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_PARAMMODIFYRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 修改参数结果
                */
                class ParamModifyResult : public AbstractModel
                {
                public:
                    ParamModifyResult();
                    ~ParamModifyResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取修改参数名字
                     * @return Param 修改参数名字
                     * 
                     */
                    std::string GetParam() const;

                    /**
                     * 设置修改参数名字
                     * @param _param 修改参数名字
                     * 
                     */
                    void SetParam(const std::string& _param);

                    /**
                     * 判断参数 Param 是否已赋值
                     * @return Param 是否已赋值
                     * 
                     */
                    bool ParamHasBeenSet() const;

                    /**
                     * 获取参数修改结果。0表示修改成功；-1表示修改失败；-2表示该参数值非法
                     * @return Code 参数修改结果。0表示修改成功；-1表示修改失败；-2表示该参数值非法
                     * 
                     */
                    int64_t GetCode() const;

                    /**
                     * 设置参数修改结果。0表示修改成功；-1表示修改失败；-2表示该参数值非法
                     * @param _code 参数修改结果。0表示修改成功；-1表示修改失败；-2表示该参数值非法
                     * 
                     */
                    void SetCode(const int64_t& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                private:

                    /**
                     * 修改参数名字
                     */
                    std::string m_param;
                    bool m_paramHasBeenSet;

                    /**
                     * 参数修改结果。0表示修改成功；-1表示修改失败；-2表示该参数值非法
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_PARAMMODIFYRESULT_H_
