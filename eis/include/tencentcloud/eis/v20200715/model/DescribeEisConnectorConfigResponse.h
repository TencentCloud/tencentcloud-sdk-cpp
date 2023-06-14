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

#ifndef TENCENTCLOUD_EIS_V20200715_MODEL_DESCRIBEEISCONNECTORCONFIGRESPONSE_H_
#define TENCENTCLOUD_EIS_V20200715_MODEL_DESCRIBEEISCONNECTORCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eis
    {
        namespace V20200715
        {
            namespace Model
            {
                /**
                * DescribeEisConnectorConfig返回参数结构体
                */
                class DescribeEisConnectorConfigResponse : public AbstractModel
                {
                public:
                    DescribeEisConnectorConfigResponse();
                    ~DescribeEisConnectorConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取连接器配置参数描述（json结构），示例如下：
{
    "attributes":{
        "description":"测试", // 连接器的描述
        "displayName":"测试", // 连接器的展示名
        "name":"test", // 连接器的名称
        "version":"1.0.0" // 连接器的版本号
    },
    "properties":[
        {
            "attributes":{
                "displayName":"企业ID", // 参数的展示名
                "name":"para1", // 参数名
                "required":"true", // 是否必填
                "type":"int" // 参数的类型
            }
        },
        {
            "attributes":{
                "displayName":"成员管理密钥",
                "name":"para2",
                "required":"true",
                "type":"float"
            }
        },
        {
            "attributes":{
                "displayName":"应用管理密钥",
                "name":"para3",
                "required":"true",
                "type":"string"
            }
        },
        {
            "attributes":{
                "displayName":"企业ID",
                "name":"para4",
                "required":"true",
                "type":"decimal"
            }
        },
        {
            "attributes":{
                "displayName":"成员管理密钥",
                "name":"para5",
                "required":"true",
                "type":"bool"
            }
        },
        {
            "attributes":{
                "displayName":"应用管理密钥",
                "name":"para6",
                "required":"true",
                "type":"date"
            }
        },
        {
            "attributes":{
                "displayName":"企业ID",
                "name":"para7",
                "required":"true",
                "type":"time"
            }
        },
        {
            "attributes":{
                "displayName":"成员管理密钥",
                "name":"para8",
                "required":"true",
                "type":"datetime"
            }
        },
        {
            "attributes":{
                "displayName":"应用管理密钥",
                "name":"para9",
                "required":"true",
                "type":"map"
            },
            "children":[
                {
                    "attributes":{
                        "displayName":"key",
                        "name":"key",
                        "required":"true",
                        "type":"string"
                    }
                },
                {
                    "attributes":{
                        "displayName":"value",
                        "name":"value",
                        "required":"true",
                        "type":"any"
                    }
                }
            ]
        },
        {
            "attributes":{
                "displayName":"企业ID",
                "name":"para10",
                "required":"true",
                "type":"list" // list，list里元素的类型是结构体，children里是结构体的描述
            },
            "children":[
                {
                    "attributes":{
                        "displayName":"field1",
                        "name":"field1",
                        "required":"true",
                        "type":"string"
                    }
                },
                {
                    "attributes":{
                        "displayName":"field2",
                        "name":"field2",
                        "required":"true",
                        "type":"any"
                    }
                }
            ]
        },
        {
            "attributes":{
                "displayName":"成员管理密钥",
                "name":"para11",
                "required":"true",
                "type":"struct"
            },
            "children":[
                {
                    "attributes":{
                        "displayName":"field1", // 结构体属性的展示名
                        "name":"field1", // 结构体属性的名称
                        "required":"true", // 是否必填
                        "type":"string" // 属性的类型
                    }
                },
                {
                    "attributes":{
                        "displayName":"field2",
                        "name":"field2",
                        "required":"true",
                        "type":"any"
                    }
                }
            ]
        },
        {
            "attributes":{
                "displayName":"应用管理密钥",
                "name":"para12",
                "required":"true",
                "type":"enum"
            },
            "children":[
                {
                    "attributes":{
                        "displayName":"PC", // 枚举值的展示名
                        "name":"PC" // 枚举值的名称
                    }
                },
                {
                    "attributes":{
                        "displayName":"MAC",
                        "name":"MAC"
                    }
                }
            ]
        }
    ]
}
                     * @return ConnectorParameter 连接器配置参数描述（json结构），示例如下：
{
    "attributes":{
        "description":"测试", // 连接器的描述
        "displayName":"测试", // 连接器的展示名
        "name":"test", // 连接器的名称
        "version":"1.0.0" // 连接器的版本号
    },
    "properties":[
        {
            "attributes":{
                "displayName":"企业ID", // 参数的展示名
                "name":"para1", // 参数名
                "required":"true", // 是否必填
                "type":"int" // 参数的类型
            }
        },
        {
            "attributes":{
                "displayName":"成员管理密钥",
                "name":"para2",
                "required":"true",
                "type":"float"
            }
        },
        {
            "attributes":{
                "displayName":"应用管理密钥",
                "name":"para3",
                "required":"true",
                "type":"string"
            }
        },
        {
            "attributes":{
                "displayName":"企业ID",
                "name":"para4",
                "required":"true",
                "type":"decimal"
            }
        },
        {
            "attributes":{
                "displayName":"成员管理密钥",
                "name":"para5",
                "required":"true",
                "type":"bool"
            }
        },
        {
            "attributes":{
                "displayName":"应用管理密钥",
                "name":"para6",
                "required":"true",
                "type":"date"
            }
        },
        {
            "attributes":{
                "displayName":"企业ID",
                "name":"para7",
                "required":"true",
                "type":"time"
            }
        },
        {
            "attributes":{
                "displayName":"成员管理密钥",
                "name":"para8",
                "required":"true",
                "type":"datetime"
            }
        },
        {
            "attributes":{
                "displayName":"应用管理密钥",
                "name":"para9",
                "required":"true",
                "type":"map"
            },
            "children":[
                {
                    "attributes":{
                        "displayName":"key",
                        "name":"key",
                        "required":"true",
                        "type":"string"
                    }
                },
                {
                    "attributes":{
                        "displayName":"value",
                        "name":"value",
                        "required":"true",
                        "type":"any"
                    }
                }
            ]
        },
        {
            "attributes":{
                "displayName":"企业ID",
                "name":"para10",
                "required":"true",
                "type":"list" // list，list里元素的类型是结构体，children里是结构体的描述
            },
            "children":[
                {
                    "attributes":{
                        "displayName":"field1",
                        "name":"field1",
                        "required":"true",
                        "type":"string"
                    }
                },
                {
                    "attributes":{
                        "displayName":"field2",
                        "name":"field2",
                        "required":"true",
                        "type":"any"
                    }
                }
            ]
        },
        {
            "attributes":{
                "displayName":"成员管理密钥",
                "name":"para11",
                "required":"true",
                "type":"struct"
            },
            "children":[
                {
                    "attributes":{
                        "displayName":"field1", // 结构体属性的展示名
                        "name":"field1", // 结构体属性的名称
                        "required":"true", // 是否必填
                        "type":"string" // 属性的类型
                    }
                },
                {
                    "attributes":{
                        "displayName":"field2",
                        "name":"field2",
                        "required":"true",
                        "type":"any"
                    }
                }
            ]
        },
        {
            "attributes":{
                "displayName":"应用管理密钥",
                "name":"para12",
                "required":"true",
                "type":"enum"
            },
            "children":[
                {
                    "attributes":{
                        "displayName":"PC", // 枚举值的展示名
                        "name":"PC" // 枚举值的名称
                    }
                },
                {
                    "attributes":{
                        "displayName":"MAC",
                        "name":"MAC"
                    }
                }
            ]
        }
    ]
}
                     * 
                     */
                    std::string GetConnectorParameter() const;

                    /**
                     * 判断参数 ConnectorParameter 是否已赋值
                     * @return ConnectorParameter 是否已赋值
                     * 
                     */
                    bool ConnectorParameterHasBeenSet() const;

                private:

                    /**
                     * 连接器配置参数描述（json结构），示例如下：
{
    "attributes":{
        "description":"测试", // 连接器的描述
        "displayName":"测试", // 连接器的展示名
        "name":"test", // 连接器的名称
        "version":"1.0.0" // 连接器的版本号
    },
    "properties":[
        {
            "attributes":{
                "displayName":"企业ID", // 参数的展示名
                "name":"para1", // 参数名
                "required":"true", // 是否必填
                "type":"int" // 参数的类型
            }
        },
        {
            "attributes":{
                "displayName":"成员管理密钥",
                "name":"para2",
                "required":"true",
                "type":"float"
            }
        },
        {
            "attributes":{
                "displayName":"应用管理密钥",
                "name":"para3",
                "required":"true",
                "type":"string"
            }
        },
        {
            "attributes":{
                "displayName":"企业ID",
                "name":"para4",
                "required":"true",
                "type":"decimal"
            }
        },
        {
            "attributes":{
                "displayName":"成员管理密钥",
                "name":"para5",
                "required":"true",
                "type":"bool"
            }
        },
        {
            "attributes":{
                "displayName":"应用管理密钥",
                "name":"para6",
                "required":"true",
                "type":"date"
            }
        },
        {
            "attributes":{
                "displayName":"企业ID",
                "name":"para7",
                "required":"true",
                "type":"time"
            }
        },
        {
            "attributes":{
                "displayName":"成员管理密钥",
                "name":"para8",
                "required":"true",
                "type":"datetime"
            }
        },
        {
            "attributes":{
                "displayName":"应用管理密钥",
                "name":"para9",
                "required":"true",
                "type":"map"
            },
            "children":[
                {
                    "attributes":{
                        "displayName":"key",
                        "name":"key",
                        "required":"true",
                        "type":"string"
                    }
                },
                {
                    "attributes":{
                        "displayName":"value",
                        "name":"value",
                        "required":"true",
                        "type":"any"
                    }
                }
            ]
        },
        {
            "attributes":{
                "displayName":"企业ID",
                "name":"para10",
                "required":"true",
                "type":"list" // list，list里元素的类型是结构体，children里是结构体的描述
            },
            "children":[
                {
                    "attributes":{
                        "displayName":"field1",
                        "name":"field1",
                        "required":"true",
                        "type":"string"
                    }
                },
                {
                    "attributes":{
                        "displayName":"field2",
                        "name":"field2",
                        "required":"true",
                        "type":"any"
                    }
                }
            ]
        },
        {
            "attributes":{
                "displayName":"成员管理密钥",
                "name":"para11",
                "required":"true",
                "type":"struct"
            },
            "children":[
                {
                    "attributes":{
                        "displayName":"field1", // 结构体属性的展示名
                        "name":"field1", // 结构体属性的名称
                        "required":"true", // 是否必填
                        "type":"string" // 属性的类型
                    }
                },
                {
                    "attributes":{
                        "displayName":"field2",
                        "name":"field2",
                        "required":"true",
                        "type":"any"
                    }
                }
            ]
        },
        {
            "attributes":{
                "displayName":"应用管理密钥",
                "name":"para12",
                "required":"true",
                "type":"enum"
            },
            "children":[
                {
                    "attributes":{
                        "displayName":"PC", // 枚举值的展示名
                        "name":"PC" // 枚举值的名称
                    }
                },
                {
                    "attributes":{
                        "displayName":"MAC",
                        "name":"MAC"
                    }
                }
            ]
        }
    ]
}
                     */
                    std::string m_connectorParameter;
                    bool m_connectorParameterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIS_V20200715_MODEL_DESCRIBEEISCONNECTORCONFIGRESPONSE_H_
