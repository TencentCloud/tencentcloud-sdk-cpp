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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_OPERATIONINFO_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_OPERATIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/OperationInfoDetail.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 提供给前端，控制按钮是否显示
                */
                class OperationInfo : public AbstractModel
                {
                public:
                    OperationInfo();
                    ~OperationInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取初始化按钮的控制信息
                     * @return Init 初始化按钮的控制信息
                     * 
                     */
                    OperationInfoDetail GetInit() const;

                    /**
                     * 设置初始化按钮的控制信息
                     * @param _init 初始化按钮的控制信息
                     * 
                     */
                    void SetInit(const OperationInfoDetail& _init);

                    /**
                     * 判断参数 Init 是否已赋值
                     * @return Init 是否已赋值
                     * 
                     */
                    bool InitHasBeenSet() const;

                    /**
                     * 获取添加实例按钮的控制信息
                     * @return AddInstance 添加实例按钮的控制信息
                     * 
                     */
                    OperationInfoDetail GetAddInstance() const;

                    /**
                     * 设置添加实例按钮的控制信息
                     * @param _addInstance 添加实例按钮的控制信息
                     * 
                     */
                    void SetAddInstance(const OperationInfoDetail& _addInstance);

                    /**
                     * 判断参数 AddInstance 是否已赋值
                     * @return AddInstance 是否已赋值
                     * 
                     */
                    bool AddInstanceHasBeenSet() const;

                    /**
                     * 获取销毁机器的控制信息
                     * @return Destroy 销毁机器的控制信息
                     * 
                     */
                    OperationInfoDetail GetDestroy() const;

                    /**
                     * 设置销毁机器的控制信息
                     * @param _destroy 销毁机器的控制信息
                     * 
                     */
                    void SetDestroy(const OperationInfoDetail& _destroy);

                    /**
                     * 判断参数 Destroy 是否已赋值
                     * @return Destroy 是否已赋值
                     * 
                     */
                    bool DestroyHasBeenSet() const;

                private:

                    /**
                     * 初始化按钮的控制信息
                     */
                    OperationInfoDetail m_init;
                    bool m_initHasBeenSet;

                    /**
                     * 添加实例按钮的控制信息
                     */
                    OperationInfoDetail m_addInstance;
                    bool m_addInstanceHasBeenSet;

                    /**
                     * 销毁机器的控制信息
                     */
                    OperationInfoDetail m_destroy;
                    bool m_destroyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_OPERATIONINFO_H_
