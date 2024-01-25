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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CHECKCUSTOMFUNCTIONPREMISERESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CHECKCUSTOMFUNCTIONPREMISERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * CheckCustomFunctionPremise返回参数结构体
                */
                class CheckCustomFunctionPremiseResponse : public AbstractModel
                {
                public:
                    CheckCustomFunctionPremiseResponse();
                    ~CheckCustomFunctionPremiseResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Spark 是否安装
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SparkInstalled Spark 是否安装
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetSparkInstalled() const;

                    /**
                     * 判断参数 SparkInstalled 是否已赋值
                     * @return SparkInstalled 是否已赋值
                     * 
                     */
                    bool SparkInstalledHasBeenSet() const;

                    /**
                     * 获取Livy 是否安装
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LivyInstalled Livy 是否安装
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetLivyInstalled() const;

                    /**
                     * 判断参数 LivyInstalled 是否已赋值
                     * @return LivyInstalled 是否已赋值
                     * 
                     */
                    bool LivyInstalledHasBeenSet() const;

                    /**
                     * 获取无
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorMessage 无
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                private:

                    /**
                     * Spark 是否安装
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_sparkInstalled;
                    bool m_sparkInstalledHasBeenSet;

                    /**
                     * Livy 是否安装
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_livyInstalled;
                    bool m_livyInstalledHasBeenSet;

                    /**
                     * 无
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CHECKCUSTOMFUNCTIONPREMISERESPONSE_H_
