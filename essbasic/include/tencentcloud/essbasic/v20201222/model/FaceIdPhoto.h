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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_FACEIDPHOTO_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_FACEIDPHOTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20201222
        {
            namespace Model
            {
                /**
                * 此结构体 (FaceIdPhoto) 用于描述慧眼人脸核身照片信息。
                */
                class FaceIdPhoto : public AbstractModel
                {
                public:
                    FaceIdPhoto();
                    ~FaceIdPhoto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取核身结果：
0 - 通过；
1 - 未通过
                     * @return Result 核身结果：
0 - 通过；
1 - 未通过
                     * 
                     */
                    int64_t GetResult() const;

                    /**
                     * 设置核身结果：
0 - 通过；
1 - 未通过
                     * @param _result 核身结果：
0 - 通过；
1 - 未通过
                     * 
                     */
                    void SetResult(const int64_t& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取核身失败描述
                     * @return Description 核身失败描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置核身失败描述
                     * @param _description 核身失败描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取照片数据 (base64编码, 一般为JPG或PNG)
                     * @return Photo 照片数据 (base64编码, 一般为JPG或PNG)
                     * 
                     */
                    std::string GetPhoto() const;

                    /**
                     * 设置照片数据 (base64编码, 一般为JPG或PNG)
                     * @param _photo 照片数据 (base64编码, 一般为JPG或PNG)
                     * 
                     */
                    void SetPhoto(const std::string& _photo);

                    /**
                     * 判断参数 Photo 是否已赋值
                     * @return Photo 是否已赋值
                     * 
                     */
                    bool PhotoHasBeenSet() const;

                    /**
                     * 获取订单号 (orderNo)
                     * @return OrderNumber 订单号 (orderNo)
                     * 
                     */
                    std::string GetOrderNumber() const;

                    /**
                     * 设置订单号 (orderNo)
                     * @param _orderNumber 订单号 (orderNo)
                     * 
                     */
                    void SetOrderNumber(const std::string& _orderNumber);

                    /**
                     * 判断参数 OrderNumber 是否已赋值
                     * @return OrderNumber 是否已赋值
                     * 
                     */
                    bool OrderNumberHasBeenSet() const;

                private:

                    /**
                     * 核身结果：
0 - 通过；
1 - 未通过
                     */
                    int64_t m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 核身失败描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 照片数据 (base64编码, 一般为JPG或PNG)
                     */
                    std::string m_photo;
                    bool m_photoHasBeenSet;

                    /**
                     * 订单号 (orderNo)
                     */
                    std::string m_orderNumber;
                    bool m_orderNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_FACEIDPHOTO_H_
